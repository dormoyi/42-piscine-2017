/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:05:31 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/18 16:39:01 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "print_fun.h"
#include "ft_opp.h"

void	ft_usage(int a, int b)
{
	ft_putstr("] are accepted.");
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	int i;

	i = 0;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	while (comp_str(argv[2], g_opptab[i].op) == 0 && *(g_opptab[i].op) != '\0')
		i++;
	if (*(g_opptab[i].op) == '\0')
	{
		i = -1;
		ft_putstr("error : only [ ");
		while (*(g_opptab[++i].op) != '\0')
		{
			ft_putstr(g_opptab[i].op);
			ft_putchar(' ');
		}
		ft_usage(a, b);
	}
	else
		g_opptab[i].f(a, b);
	return (0);
}
