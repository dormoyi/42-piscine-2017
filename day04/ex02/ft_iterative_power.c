/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:25:56 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/08 17:38:48 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	puissance;

	puissance = 1;
	if (power == 0)
		return (1);
	else
	{
		if (power < 0)
			return (0);
		else
		{
			while (power > 0)
			{
				puissance = puissance * nb;
				power--;
			}
		}
	}
	return (puissance);
}
