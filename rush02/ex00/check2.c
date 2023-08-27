/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiesse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:01:16 by msiesse           #+#    #+#             */
/*   Updated: 2018/07/21 18:59:27 by msiesse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int		check_col(char *str)
{
	int col;
	int verif;
	int i;

	col = 0;
	i = -1;
	verif = col;
	while (str[++i])
	{
		verif = col;
		col = 0;
		while (str[i] && str[i] != '\n')
		{
			col++;
			i++;
		}
		if (col == i)
			verif = col;
		if (verif != col)
			return (-1);
	}
	return (col);
}

int		verif_newline(char *str)
{
	if (str[ft_strlen(str) - 1] == '\n')
		return (1);
	return (0);
}

int		check_middle_line(int i, char *str, int col)
{
	int j;

	j = 0;
	while (j < 5)
	{
		if (g_tab[j] == 1)
		{
			if (str[i] != g_tab_rush[j].middle_line || str[i + col - 1]
				!= g_tab_rush[j].middle_line)
				g_tab[j] = 0;
		}
		j++;
	}
	i++;
	while (str[i + 1] != '\n')
	{
		if (str[i] != ' ')
			return (-1);
		i++;
	}
	return (i + 2);
}

int		still_good(void)
{
	int j;

	j = 0;
	while (j < 5)
	{
		if (g_tab[j] == 1)
			break ;
		if (j == 4)
			return (0);
		j++;
	}
	return (1);
}

/*int main()
{
	char str[] = "o---o\n|   |\n|   a\n";
	//g_tab[0] = 0;
	int k = middle_line(6, str, 5);
	printf("%d\n", k);
	int j = 0;
	while (j < 5)
	{
		printf("%d\n", g_tab[j]);
		j++;
	}
}*/
