/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:05:31 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/18 09:55:02 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "ft_opp.h"

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
	while (comp_str(argv[2], g_opptab[i].op) == 0)
		i++;
	g_opptab[i].f(a, b);
	return (0);
}
