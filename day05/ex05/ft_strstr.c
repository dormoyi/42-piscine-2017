/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:02:49 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/12 08:02:21 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		while (*(to_find + i) == *(str + i) && *(to_find + i) && *(str + i))
			i++;
		if (*(to_find + i) == '\0')
			return (str);
		else
			i = 0;
		str++;
	}
	return (0);
}
