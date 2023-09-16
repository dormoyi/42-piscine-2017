/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:30:29 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/11 17:57:54 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		checkbase(char *base)
{
	int i;
	int j;
	int len;

	len = -1;
	while (base[len++] != '\0')
		if ((base[len] < 32) || (base[len] == 127)
				|| (base[len] == '+') || (base[len] == '-'))
			return (0);
	if (len < 2)
		return (0);
	i = -1;
	j = 0;
	while (i++ < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
	}
	return (1);
}

void	convert(int nb, int basenb, char *base)
{
	if (nb % basenb == nb)
		ft_putchar(base[nb]);
	else
	{
		convert(nb / basenb, basenb, base);
		ft_putchar(base[nb % basenb]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	if (checkbase(base))
	{
		i = 0;
		while (base[i])
			i++;
		convert(nbr, i, base);
	}
}
