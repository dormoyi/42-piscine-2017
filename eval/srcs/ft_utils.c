/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:33:35 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 23:33:38 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

int		ft_is_whitespace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int		ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_is_op(char c)
{
	if ((c >= '*' && c <= '+') || c == '%' || c == '/' || c == '-')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		neg;
	long	result;

	neg = 0;
	result = 0;
	if (*str == '-')
	{
		neg = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_is_number(*str))
	{
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (neg ? -result : result);
}
