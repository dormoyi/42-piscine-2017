/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 13:46:15 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/10 14:10:39 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;

	if (nb >= 0 && nb < 13)
	{
		factorial = 1;
		while (nb > 1)
		{
			factorial = factorial * nb;
			nb--;
		}
		return (factorial);
	}
	else
		return (0);
}
