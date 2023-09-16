/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 21:19:38 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/10 21:40:12 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int end;
	unsigned int i;

	end = 0;
	while ((dest[end]) && (end < size))
		end++;
	i = end;
	while ((src[i - end] != '\0') && (i < size - 1))
	{
		dest[i] = src[i - end];
		i++;
	}
	if (end < size)
		dest[i] = '\0';
	return (end + ft_strlen(src));
}
