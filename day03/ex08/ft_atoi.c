/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:44:40 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/09 16:22:32 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int signe;

	nb = 0;
	signe = 1;
	i = 0;
	while ((8 < str[i] && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-')
		signe = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (47 < str[i] && str[i] < 58)
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (nb > 0 && signe == -1)
		return (-nb);
	else
		return (nb);
}
