/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfroissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 19:37:33 by tfroissa          #+#    #+#             */
/*   Updated: 2018/07/08 13:20:27 by msiesse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_header_line(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
			i++;
		}
		else if (i < x)
		{
			ft_putchar('B');
			i++;
		}
		else
		{
			ft_putchar('C');
			i++;
		}
	}
	return (0);
}

int		ft_middle_line(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('B');
			i++;
		}
		else if (i < x)
		{
			ft_putchar(' ');
			i++;
		}
		else
		{
			ft_putchar('B');
			i++;
		}
	}
	return (0);
}

int		ft_end_line(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('C');
			i++;
		}
		else if (i < x)
		{
			ft_putchar('B');
			i++;
		}
		else
		{
			ft_putchar('A');
			i++;
		}
	}
	return (0);
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			ft_header_line(x);
			i++;
		}
		else if (i < y)
		{
			ft_middle_line(x);
			i++;
		}
		else
		{
			ft_end_line(x);
			i++;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
	}
}
