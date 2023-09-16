/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:28:23 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/11 19:14:43 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		stock;

	i = 0;
	while (i + 1 < size)
	{
		while (tab[i] > tab[i + 1])
		{
			stock = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = stock;
			if (i > 0)
				i--;
		}
		i++;
	}
}
