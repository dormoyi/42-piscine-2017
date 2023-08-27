/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabautis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:21:09 by dabautis          #+#    #+#             */
/*   Updated: 2018/07/21 17:51:35 by dabautis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_struct.h"
#include "check.h"

int		check_first_line(char *str)
{
	int i;
	int j;

	j = 0;
	while (j < 5)
	{
		i = 1;
		if (g_tab_rush[j].up_left != str[0])
			g_tab[j] = 0;
		while (str[i + 1] != '\n')
		{
			if (g_tab_rush[j].middle_col != str[i])
				g_tab[j] = 0;
			i++;
		}
		if (g_tab_rush[j].up_right != str[i])
			g_tab[j] = 0;
		j++;
	}
	return (i + 2);
}

int		check_last_line(char *str, int i)
{
	int j;
	int temp;

	temp = i;
	j = 0;
	while (j < 5)
	{
		if (g_tab[j] != '0')
		{
			i = temp;
			if (g_tab_rush[j].up_left != str[i])
				g_tab[j] = 0;
			while (str[i + 1] != '\n')
			{
				if (g_tab_rush[j].middle_col != str[i])
					g_tab[j] = 0;
				i++;
			}
			if (g_tab_rush[j].up_right != str[i])
				g_tab[j] = 0;
		}
		j++;
	}
	return (i + 2);
}

int		count(char *str)
{
	int i;
	int total_line;

	i = 0;
	total_line = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			total_line++;
		i++;
	}
	return (total_line);
}
