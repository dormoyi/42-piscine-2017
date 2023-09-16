/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 12:17:52 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/20 14:58:59 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list != 0)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

void	swap(t_list *l1, t_list *l2)
{
	void	*tmp;

	tmp = l1->data;
	l1->data = l2->data;
	l2->data = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		len;
	int		link;
	t_list	*l2;
	t_list	*l1;
	int		i2;

	if (begin_list != 0)
	{
		len = ft_list_size(begin_list);
		link = 0;
		l1 = begin_list;
		while (link < len - link - 1)
		{
			l2 = l1;
			i2 = link;
			while (i2 < len - link - 1)
			{
				l2 = l2->next;
				i2++;
			}
			swap(l1, l2);
			l1 = l1->next;
			link++;
		}
	}
}
