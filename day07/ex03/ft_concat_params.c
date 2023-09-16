/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 13:12:24 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/16 22:57:40 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*(str + len))
	{
		len++;
	}
	return (len);
}

void	ft_fillstr(char *str, int argc, char **argv)
{
	int iarg;
	int istr;
	int istrarg;

	istrarg = 0;
	iarg = 1;
	istr = 0;
	while (iarg < argc)
	{
		istrarg = 0;
		while (argv[iarg][istrarg])
		{
			str[istr] = argv[iarg][istrarg];
			istrarg++;
			istr++;
		}
		str[istr] = '\n';
		istr++;
		iarg++;
	}
	str[istr - 1] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	int		iarg;
	char	*str;

	len = 0;
	iarg = 1;
	if (argc == 1)
		return ("\0");
	while (iarg < argc)
	{
		len = ft_strlen(argv[iarg]) + 1;
		iarg++;
	}
	if (!(str = (char *)malloc(len)))
		return (0);
	ft_fillstr(str, argc, argv);
	return (str);
}
