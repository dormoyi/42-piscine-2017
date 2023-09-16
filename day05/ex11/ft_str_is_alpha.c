/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 07:24:17 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/11 09:30:40 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while ((str[i] != '\0') && (('a' <= str[i] && str[i] <= 'z') ||
			('A' <= str[i] && str[i] <= 'Z')))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
