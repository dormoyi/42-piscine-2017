/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 08:22:47 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/24 16:04:27 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *ls1;

	if (*begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	ls1 = *begin_list1;
	if (begin_list2 != 0 && begin_list1 != 0)
	{
		while (ls1->next != 0)
			ls1 = ls1->next;
		ls1->next = begin_list2;
	}
}
