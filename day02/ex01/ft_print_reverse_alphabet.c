/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:10:46 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/06 09:22:23 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char a);

void	ft_print_reverse_alphabet(void)
{
	int place;

	place = 25;
	while (place >= 0)
	{
		ft_putchar('a' + place);
		place--;
	}
}
