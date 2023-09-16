/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 07:41:59 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/25 08:04:12 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*ls2;

	if (data_ref == 0 || *begin_list == 0)
		return ;
	while ((*cmp)((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
		if (*begin_list == 0)
			return ;
	}
	ls2 = *begin_list;
	while ((ls2->next) != 0)
	{
		if ((*cmp)((ls2->next)->data, data_ref) == 0)
		{
			tmp = ls2->next;
			ls2->next = (ls2->next)->next;
			free(tmp);
		}
		else
			ls2 = ls2->next;
	}
}
