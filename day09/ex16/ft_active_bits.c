/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:41:35 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/13 16:33:35 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int intmax;

	intmax = -2147483648;
	if (value == intmax)
		return (32);
	else if (value < 0)
		return (ft_active_bits(-1 * value) + 1);
	else if (value % 2 == value)
		return (value);
	else
		return (ft_active_bits(value / 2) + value % 2);
}
