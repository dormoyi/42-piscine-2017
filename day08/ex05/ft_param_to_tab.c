/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 08:08:46 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/16 18:35:02 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strcpy(char *str, int len)
{
	char *cpy;

	cpy = (char *)malloc(sizeof(*cpy) * (len + 1));
	while (*str)
	{
		*cpy = *str;
		cpy++;
		str++;
	}
	*cpy = '\0';
	return (cpy);
}

int					str_len(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *structtab;
	int			i;

	i = 0;
	structtab = (t_stock_par *)malloc(sizeof(*structtab) * (ac + 1));
	structtab[ac].str = 0;
	while (i < ac)
	{
		structtab[i].size_param = str_len(av[i]);
		structtab[i].str = av[i];
		structtab[i].copy = ft_strcpy(av[i], str_len(av[i]));
		structtab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (structtab);
}
