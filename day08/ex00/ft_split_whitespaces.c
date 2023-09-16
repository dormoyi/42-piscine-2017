/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 11:09:50 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/16 20:53:04 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_findnbwords(char *str)
{
	int nb;

	nb = 0;
	if ((*str != ' ') && (*str != 9) && (*str != '\n'))
		nb = 1;
	while (*str)
	{
		if (((*str == ' ') || (*str == 9) || (*str == '\n'))
			&& ((*(str + 1) != ' ') && (*(str + 1) != 9) && (*(str + 1)
						!= '\n') && (*(str + 1) != 0)))
			nb++;
		str++;
	}
	return (nb);
}

void	ft_cpy(char **tab, int size, int itab, char *str)
{
	int i;

	i = 0;
	if ((tab[itab] = (char *)malloc(size + 1)))
	{
		while (i < size)
		{
			tab[itab][i] = *str;
			i++;
			str++;
		}
		tab[itab][i] = '\0';
	}
}

char	**createtab(char *str)
{
	char	**gdtab;
	int		size;

	size = ft_findnbwords(str);
	if (!(gdtab = (char **)malloc(sizeof(char **) * (size + 1))))
		return (0);
	gdtab[size] = 0;
	return (gdtab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**gdtab;
	int		size;
	int		word;

	gdtab = createtab(str);
	if (gdtab == NULL)
		return (0);
	word = 0;
	while (*str)
	{
		size = 0;
		while ((*str != ' ') && (*str != 9) && (*str != '\n') && (*str))
		{
			size++;
			str++;
		}
		if (size > 0)
		{
			ft_cpy(gdtab, size, word, str - size);
			word++;
		}
		while (((*str == ' ') || (*str == 9) || (*str == '\n')) && (*str))
			str++;
	}
	return (gdtab);
}
