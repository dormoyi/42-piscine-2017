/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 23:15:32 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 10:26:10 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *prev;
	t_list *node;
	t_list *curs;

	if (begin_list == 0)
		return ;
	curs = *begin_list;
	node = ft_create_elem(data);
	prev = 0;
	while (curs != 0 && cmp(node->data, curs->data) > 0)
	{
		prev = curs;
		curs = curs->next;
	}
	if (prev != 0)
		prev->next = node;
	else
		*begin_list = node;
	node->next = curs;
}
