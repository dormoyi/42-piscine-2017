/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:22:47 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 14:08:20 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_STRUCT_H
# define RUSH_STRUCT_H

typedef struct	s_rush
{
	char *car_l;
	char up_left;
	char down_left;
	char up_right;
	char down_right;
	char middle_line;
	char middle_col;
}				t_rush;
#endif
