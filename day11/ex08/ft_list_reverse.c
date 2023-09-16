/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 16:26:48 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 08:15:40 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*after;
	t_list	*prev;
	t_list	*curr;

	if (*begin_list == 0)
		return ;
	if (begin_list == 0)
		return ;
	prev = 0;
	curr = *begin_list;
	after = curr->next;
	while (curr != 0)
	{
		after = curr->next;
		curr->next = prev;
		prev = curr;
		curr = after;
	}
	*begin_list = prev;
}
