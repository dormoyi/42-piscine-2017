/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:22:47 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 15:40:23 by msiesse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_STRUCT_H
# define RUSH_STRUCT_H

typedef struct	s_rush
{
	char up_left;
	char down_left;
	char up_right;
	char down_right;
	char middle_line;
	char middle_col;
}				t_rush;

t_rush			g_tab_rush[] =
{
	{'o', 'o', 'o', 'o', '|', '-'},
	{'/', 92, 92, '/', '*', '*'},
	{'A', 'C', 'A', 'C', 'B', 'B'},
	{'A', 'A', 'C', 'C', 'B', 'B'},
	{'A', 'C', 'C', 'A', 'B', 'B'}
};

#endif
