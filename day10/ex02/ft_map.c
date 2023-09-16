/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 08:08:17 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/17 09:13:33 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *ret;
	int i;

	i = 0;
	if (!(ret = (int *)malloc(sizeof(*ret) * length)))
		return (0);
	while (length > 0)
	{
		*(ret + i) = f(*tab);
		tab++;
		i++;
		length--;
	}
	return (ret);
}
