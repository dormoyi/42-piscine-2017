/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 22:40:39 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/16 21:00:21 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		convertto10(char *nb, int snbr, char *base, int sizebase)
{
	int				*digitfrom;
	int				sign;
	int				inb;
	int				ibase;
	long long int	nb10;

	inb = 0;
	if (!(digitfrom = (int *)malloc(sizeof(*digitfrom) * (snbr + 1))))
		return (0);
	sign = (nb[0] == '-') ? -1 : 1;
	nb = (nb[0] == '-' || nb[0] == '+') ? nb + 1 : nb;
	while (nb[inb])
	{
		ibase = 0;
		while (base[ibase] != nb[inb])
			ibase++;
		digitfrom[inb] = ibase;
		inb++;
	}
	nb10 = 0;
	ibase = -1;
	while (++ibase < inb)
		nb10 = nb10 * sizebase + digitfrom[ibase];
	free(digitfrom);
	return (nb10 * sign);
}

char	*converttobase(long long int nb, int sizebase)
{
	int				sizeto;
	long long int	odg;
	int				sign;
	char			*digitto;

	odg = 1;
	sign = (nb < 0) ? 1 : 0;
	sizeto = (nb == 0) ? 1 : 0;
	nb = (nb < 0) ? -nb : nb;
	while (odg <= nb)
	{
		sizeto++;
		odg = odg * sizebase;
	}
	if (!(digitto = (char *)malloc(sizeof(*digitto) * (sizeto + 1 + sign))))
		return (0);
	digitto[sizeto + sign] = '\0';
	odg = sizeto + sign - 1 + 1;
	digitto[0] = '-';
	while (--odg >= 0 + sign)
	{
		digitto[odg] = nb % sizebase + '0';
		nb = nb / sizebase;
	}
	return (digitto);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nbbase;
	long long int	nbin10;
	int				size;
	char			*digit;

	nbbase = 0;
	size = 0;
	while (base_from[nbbase])
		nbbase++;
	while (nbr[size])
		size++;
	nbin10 = convertto10(nbr, size, base_from, nbbase);
	nbbase = 0;
	while (base_to[nbbase])
		nbbase++;
	digit = converttobase(nbin10, nbbase);
	size = 0;
	while (digit[size])
	{
		if (digit[size] != '-')
			digit[size] = base_to[digit[size] - '0'];
		size++;
	}
	return (digit);
}
