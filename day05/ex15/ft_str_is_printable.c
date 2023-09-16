/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:42:57 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/10 19:43:11 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while ((str[i] != '\0') && (str[i] != '\t') && (str[i] != '\n') && (str[i]
				!= '\r') && (str[i] != '\v') && (str[i]
					!= '\f') && (str[i] != ' '))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}