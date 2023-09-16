/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:32:15 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 23:38:58 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"
#include "calc.h"

int			is_mult(char c)
{
	if (c == '*' || c == '/' || c == '%')
		return (1);
	if (c == '-' || c == '+')
		return (-1);
	return (0);
}

void		calc_plus(int size, t_eval *begin_piece, int place_begin)
{
	t_eval		*curr;
	int			res;
	t_eval		*tmp;
	int			nb_plus;

	nb_plus = count_plus(begin_piece, size, place_begin);
	curr = ft_list_at(begin_piece, place_begin);
	while (nb_plus > 0)
		if (is_mult(curr->next->data) == -1)
		{
			res = do_op(curr->number, curr->next->data,
					curr->next->next->number);
			tmp = ft_create_elem_nb(res);
			curr->used = 1;
			curr->next->next->used = 1;
			tmp->next = curr->next->next;
			curr->next = tmp;
			size = size - 2;
			ft_remove_if(begin_piece);
			nb_plus--;
			curr = tmp;
		}
		else
			curr = curr->next->next;
}

int			calc_mult(int size, t_eval *begin_piece, int place_begin)
{
	t_eval		*curr;
	int			res;
	t_eval		*tmp;
	int			nb_mult;

	nb_mult = count_mult(begin_piece, size, place_begin);
	curr = ft_list_at(begin_piece, place_begin);
	while (nb_mult > 0)
		if (is_mult(curr->next->data) == 1)
		{
			res = do_op(curr->number, curr->next->data,
					curr->next->next->number);
			tmp = ft_create_elem_nb(res);
			curr->used = 1;
			curr->next->next->used = 1;
			tmp->next = curr->next->next;
			curr->next = tmp;
			size = size - 2;
			nb_mult--;
			ft_remove_if(begin_piece);
			curr = tmp;
		}
		else
			curr = curr->next->next;
	return (size);
}

void		calc_line(t_eval *begin, int place_begin, int size)
{
	size = calc_mult(size, begin, place_begin);
	calc_plus(size, begin, place_begin);
}
