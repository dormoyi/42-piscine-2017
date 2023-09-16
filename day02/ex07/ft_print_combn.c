/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 21:48:39 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/08 12:19:52 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char a);

void	affichage(int tab[], int n)
{
	int		i;

	i = 1;
	while (i <= n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (!(tab[i - 1] == 9 && tab[1] == 10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	construction(int place, int tab[], int n)
{
	int		i;

	if (place > n - 1)
		affichage(tab, n);
	else
	{
		i = tab[place] + 1;
		while (i <= 9)
		{
			tab[place + 1] = i;
			construction(place + 1, tab, n);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int		tab[11];
	int		i;

	i = 1;
	while (i < 10)
	{
		tab[i] = 0;
		i++;
	}
	tab[n + 1] = '\0';
	tab[0] = -1;
	construction(0, tab, n);
}
