/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list_input.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:40:15 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 19:08:07 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_LIST_INPUT_H
# define T_LIST_INPUT_H

typedef struct	s_list
{
	char *stock;
	struct s_list *next;	
}				t_list;
#endif
