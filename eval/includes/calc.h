/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:31:45 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/23 10:35:03 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H

# include <stdlib.h>

int		do_op(int a, char b, int c);
t_eval	*ft_create_elem_nb(int nb);
void	ft_remove_if(t_eval *begin);
int		count_mult(t_eval *begin_piece, int size, int place_begin);
int		count_plus(t_eval *begin_piece, int size, int place_begin);

#endif
