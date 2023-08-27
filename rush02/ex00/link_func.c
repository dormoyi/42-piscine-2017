/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 18:55:09 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 20:45:55 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list_input.h"
#include <stdlib.h>

t_list  *create_node(char *str)
{
	t_list *node;

	if (str == 0)
		return (0);
	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->stock = str;
		node->next = 0;
	}
	return (node);
}

int     add_node_end(t_list **begin, char *str)
{
	t_list *head;
	t_list *tmp;

	if (str == 0)
		return (0);
	tmp = create_node(str);
	if (tmp == 0)
		return (0);
	if (*begin == 0)
	{
		*begin = create_node(str);
		return (1);
	}
	head = *begin;
	while (head->next)
		head = head->next;
	head->next = tmp;
	return (1);
}

void        free_list(t_list **begin)
{
	t_list *tmp;

	while (*begin != 0)
	{
		tmp = *begin;
		*begin = (*begin)->next;
		free(tmp->stock);
		free(tmp);
	}
}
