/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 08:56:21 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/20 12:16:35 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	swap(t_list *ls1, t_list *ls2)
{
	void *tmp;

	tmp = ls1->data;
	ls1->data = ls2->data;
	ls2->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *ls1;
	t_list *ls2;

	ls1 = *begin_list;
	while (ls1 != 0)
	{
		ls2 = *begin_list;
		while (ls2->next != 0)
		{
			if (cmp(ls2->data, ls2->next->data) > 0)
				swap(ls2, ls2->next);
			ls2 = ls2->next;
		}
		ls1 = ls1->next;
	}
}
