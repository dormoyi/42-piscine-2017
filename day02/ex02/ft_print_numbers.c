/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:46:15 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/06 09:25:49 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char a);

void	ft_print_numbers(void)
{
	int rang;

	rang = '0';
	while (rang < 10 + '0')
	{
		ft_putchar(rang);
		rang++;
	}
}
