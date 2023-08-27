/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 18:58:11 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 19:04:30 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINK_FUNC_H
# define LINK_FUNC_H

t_list  *create_node(char *str);
int     add_node_end(t_list **begin, char *str);
void        free_list(t_list **begin);
#endif
