/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:26:39 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/18 22:21:03 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_fun.h"

void		ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void		ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void		ft_mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void		ft_div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
	ft_putchar('\n');
}

void		ft_mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
	ft_putchar('\n');
}
