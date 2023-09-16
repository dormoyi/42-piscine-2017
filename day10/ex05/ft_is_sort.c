/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:14:58 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/18 23:27:47 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sign(int a)
{
	if (a < 0)
		return (-1);
	if (a > 0)
		return (1);
	return (0);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int	order;

	i = 0;
	order = 0;
	while (i + 1 < length)
	{
		if (sign(f(tab[i], tab[i + 1])) * order < 0)
			return (0);
		if (f(tab[i], tab[i + 1]) != 0)
			order = sign(f(tab[i], tab[i + 1]));
		i++;
	}
	return (1);
}
