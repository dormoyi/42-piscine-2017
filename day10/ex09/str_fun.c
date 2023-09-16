/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_fun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:43:04 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/18 16:39:05 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_fun.h"

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int nb;

	nb = 0;
	i = 0;
	sign = 1;
	while ((8 < str[i] && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (47 < str[i] && str[i] < 58)
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (nb > 0 && sign == -1)
		return (-nb);
	else
		return (nb);
}

int		comp_str(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (1);
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (1);
	return (0);
}
