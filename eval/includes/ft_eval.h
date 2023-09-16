/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:31:57 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/23 10:35:53 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_H
# define FT_EVAL_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_eval{

	char				data;
	int					number;
	int					used;
	int					index;
	int					type;
	struct s_eval		*next;
}				t_eval;

t_eval			*ft_list_at(t_eval *begin_list, unsigned int nbr);
t_eval			*ft_parse_string(char *str);
t_eval			*ft_create_elem(char *data);
void			ft_list_push_back(t_eval **begin_list, char *data);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
int				ft_is_whitespace(char c);
int				ft_is_number(char c);
int				ft_is_op(char c);
int				ft_atoi(char *str);
void			ft_putchar(char c);
int				ft_deepest(t_eval *begin, int *size);
void			ft_remove_if(t_eval *begin);
void			ft_remove_par(t_eval *begin);
void			ft_add_add(t_eval *begin);
void			ft_remove_if(t_eval *begin);
void			calc_line(t_eval *begin, int place_begin, int size);
int				eval_expr(char *str);
int				is_mult(char c);

#endif
