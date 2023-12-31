/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 15:52:13 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/10 14:17:32 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb > 12))
		return (0);
	else
	{
		if (nb == 0)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
}
