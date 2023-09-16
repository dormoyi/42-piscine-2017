/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:16:06 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/17 21:12:20 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nbr);
	}
	else if (nbr % 10 == nbr)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	while ((*par).str != '\0')
	{
		ft_putstr((*par).str);
		ft_putnbr((*par).size_param);
		ft_putchar('\n');
		while (*((*par).tab))
		{
			ft_putstr(*((*par).tab));
			(*par).tab++;
		}
		par++;
	}
}
