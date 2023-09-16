/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:32:32 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 23:32:38 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

int		count_plus(t_eval *begin_piece, int size, int place_begin)
{
	int		nb_plus;
	t_eval	*l2;
	int		i;

	nb_plus = 0;
	l2 = ft_list_at(begin_piece, place_begin);
	i = 0;
	while (i < size)
	{
		if (is_mult(l2->data) == -1)
			nb_plus++;
		l2 = l2->next;
		i++;
	}
	return (nb_plus);
}

int		count_mult(t_eval *begin_piece, int size, int place_begin)
{
	int		nb_mult;
	t_eval	*l2;
	int		i;

	nb_mult = 0;
	l2 = ft_list_at(begin_piece, place_begin);
	i = 0;
	while (i < size)
	{
		if (is_mult(l2->data) == 1)
			nb_mult++;
		l2 = l2->next;
		i++;
	}
	return (nb_mult);
}
