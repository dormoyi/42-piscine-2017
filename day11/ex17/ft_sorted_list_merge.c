/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 07:55:10 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 08:21:34 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	t_list *curs;
	t_list *prev;
	t_list *after;

	if (begin_list1 == 0)
		return ;
	while (begin_list2 != 0)
	{
		prev = 0;
		curs = *begin_list1;
		while (curs != 0 && cmp(begin_list2->data, curs->data) > 0)
		{
			prev = curs;
			curs = curs->next;
		}
		after = begin_list2->next;
		if (prev != 0)
			prev->next = begin_list2;
		else
			*begin_list1 = begin_list2;
		begin_list2->next = curs;
		begin_list2 = after;
	}
}
