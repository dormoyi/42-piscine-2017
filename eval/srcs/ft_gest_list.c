/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gest_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:33:10 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 23:33:13 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

void	ft_remove_if(t_eval *begin)
{
	t_eval *tmp;
	t_eval *less;

	tmp = begin;
	less = begin;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->used)
		{
			less->next = tmp->next;
			free(tmp);
		}
		else
			less = less->next;
	}
}

void	ft_remove_par(t_eval *begin)
{
	t_eval *tmp;
	t_eval *less;

	tmp = begin;
	less = begin;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (less->data == '(' && (less->next)->type < 0
				&& (tmp->next)->data == ')')
		{
			less->used = 1;
			(tmp->next)->used = 1;
		}
		less = less->next;
	}
}

int		ft_deepest(t_eval *begin, int *size)
{
	int		index;
	int		point;
	t_eval	*tmp;

	index = 0;
	point = 0;
	*size = 0;
	tmp = begin;
	while (++index && tmp->next)
	{
		if (tmp->data == '(')
		{
			*size = 0;
			point = index;
		}
		if (tmp->data == ')')
		{
			*size -= 1;
			return (++point);
		}
		tmp = tmp->next;
		*size = *size + 1;
	}
	return (++point);
}

t_eval	*ft_list_at(t_eval *begin_list, unsigned int nbr)
{
	int		nb;
	t_eval	*retur;

	nb = nbr;
	retur = begin_list;
	while (--nb >= 1)
	{
		retur = retur->next;
		if (retur->next == NULL && nb > 1)
			return (NULL);
	}
	return (retur);
}

void	ft_add_add(t_eval *begin)
{
	t_eval	*tmp;
	t_eval	*less;

	tmp = begin;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->type < 0 && less->type < 0)
		{
			less->next = ft_create_elem("+");
			less->next->next = tmp;
			less = less->next;
		}
		less = less->next;
	}
}
