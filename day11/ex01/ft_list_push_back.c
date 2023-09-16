/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 07:12:21 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 10:29:56 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *ls2;

	tmp = ft_create_elem(data);
	ls2 = *begin_list;
	if (tmp == 0)
		return ;
	if (ls2 == 0)
	{
		*begin_list = tmp;
		return ;
	}
	while (ls2->next)
		ls2 = ls2->next;
	ls2->next = tmp;
}
