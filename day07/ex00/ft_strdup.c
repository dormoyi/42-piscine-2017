/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 09:27:32 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/16 16:18:24 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int			len;
	char		*str;

	len = 0;
	while (*(src + len))
		len++;
	if (!(str = (char *)malloc(sizeof(char *) * (len + 1))))
		return (0);
	str[len] = '\0';
	while (len >= 0)
	{
		str[len] = src[len];
		len--;
	}
	return (str);
}
