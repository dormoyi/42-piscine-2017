/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:27:36 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 23:34:54 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

t_eval		*ft_create_elem_nb(int nb)
{
	t_eval *tmp;

	if (!(tmp = malloc(sizeof(t_eval))))
		return (NULL);
	tmp->number = nb;
	tmp->data = '0';
	tmp->type = -1;
	tmp->used = 0;
	tmp->next = NULL;
	return (tmp);
}
