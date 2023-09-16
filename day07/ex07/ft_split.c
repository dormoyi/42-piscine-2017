/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 11:11:20 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/17 15:21:41 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char a, char *charset)
{
	while (*charset)
	{
		if (a == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_findnbwords(char *str, char *charset)
{
	int nb;

	nb = 0;
	if (ft_is_space(*str, charset) == 0)
		nb = 1;
	while (*str)
	{
		if (ft_is_space(*str, charset) &&
				ft_is_space(*(str + 1), charset) == 0 && *(str + 1) != 0)
			nb++;
		str++;
	}
	return (nb);
}

void	ft_cpy(char **tab, int size, int itab, char *str)
{
	int i;

	i = 0;
	if (((tab[itab] = (char *)malloc(size + 1))))
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

char	**createtab(char *str, char *charset)
{
	char	**gdtab;
	int		size;

	size = ft_findnbwords(str, charset);
	if (!(gdtab = (char **)malloc(sizeof(char **) * (size + 1))))
		return (0);
	gdtab[size] = 0;
	return (gdtab);
}

char	**ft_split(char *str, char *charset)
{
	char	**gdtab;
	int		size;
	int		word;

	gdtab = createtab(str, charset);
	if (gdtab == NULL)
		return (0);
	word = 0;
	while (*str)
	{
		size = 0;
		while (ft_is_space(*str, charset) == 0 && (*str))
		{
			str++;
			size++;
		}
		if (size > 0)
		{
			ft_cpy(gdtab, size, word, str - size);
			word++;
		}
		while (ft_is_space(*str, charset) && (*str))
			str++;
	}
	return (gdtab);
}
