/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:49:46 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/18 15:53:28 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include "calc_funs.h"
# include "str_fun.h"

typedef struct	s_opp
{
	char *op;
	void (*f)(int, int);
}				t_opp;
#endif
