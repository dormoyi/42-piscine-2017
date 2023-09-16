/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 12:18:09 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 10:01:24 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*ls;
	t_list	*tmp;

	if (ac == 0)
		return (0);
	ls = ft_create_elem(av[0]);
	i = 1;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = ls;
		ls = tmp;
		i++;
	}
	return (ls);
}
