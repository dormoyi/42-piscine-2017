/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 19:28:45 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/10 07:04:19 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int premier;
	int i;

	if (nb < 2)
		return (0);
	else
	{
		i = 2;
		premier = 1;
		while (premier == 1 && i < nb / 2 + 1 && i < 46341)
		{
			if (nb % i == 0)
				premier = 0;
			i++;
		}
		return (premier);
	}
}

int		ft_find_next_prime(int nb)
{
	int chercher;

	chercher = 1;
	while (chercher)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
			chercher = 0;
		}
		nb++;
	}
	return (0);
}
