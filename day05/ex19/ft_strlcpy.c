/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:51:50 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/11 09:51:58 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;
	unsigned int i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	while ((i <= len) && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
		dest[i - 1] = '\0';
	return (len);
}
