/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiesse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:45:12 by msiesse           #+#    #+#             */
/*   Updated: 2018/07/21 18:59:20 by msiesse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H
# include "rush_struct.h"
# include "ft_base.h"

int		g_tab[5] = {1, 1, 1, 1, 1};

int		check_first_line(char *str);
int		check_last_line(char *str, int i);
int		check_middle_line(int i, char *str, int col);
int		check_col(char *str);
int		verif_newline(char *str);
int		still_good(void);
int		count(char *str);

#endif
