/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 07:35:41 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 12:58:37 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nbr_l)
{
	if (nbr_l == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr_l < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr_l);
	}
	else if (nbr_l % 10 == nbr_l)
		ft_putchar(nbr_l + '0');
	else
	{
		ft_putnbr(nbr_l / 10);
		ft_putchar(nbr_l % 10 + '0');
	}
}
