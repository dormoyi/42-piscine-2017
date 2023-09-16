/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:32:53 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 23:32:59 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

int		number_parth(t_eval *list)
{
	int nb;

	nb = 0;
	while (list)
	{
		if (list->data == '(')
			nb++;
		list = list->next;
	}
	return (nb);
}

int		eval_expr(char *str)
{
	t_eval	*list;
	int		i;
	int		size;
	int		nb_par;

	size = 0;
	list = ft_parse_string(str);
	nb_par = number_parth(list);
	ft_add_add(list);
	while (number_parth(list) > 1)
	{
		ft_remove_par(list);
		ft_remove_if(list);
		i = ft_deepest(list, &size);
		calc_line(list, i, size);
		ft_remove_par(list);
		ft_remove_if(list);
		nb_par--;
	}
	return (list->next->number);
}
