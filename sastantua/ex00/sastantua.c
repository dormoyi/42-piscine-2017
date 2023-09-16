/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 11:03:06 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/08 09:31:19 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int a);

int		tlastline(int etage)
{
	int		sum_increase;
	int		num_ligne;
	int		i;

	num_ligne = (etage + 6) * (etage + 1) / 2 - 1;
	sum_increase = 0;
	i = 1;
	while (i <= etage)
	{
		if (i % 2 == 0)
			sum_increase = sum_increase + (i + 2) / 2;
		else
			sum_increase = sum_increase + (i + 3) / 2;
		i++;
	}
	return (2 + 1 + 2 * num_ligne + 2 * sum_increase);
}

void	afficher_ligne(int nb_espaces, int nb_etoiles, int nb_pipe, int bool)
{
	int		i;

	i = 0;
	while (i++ < nb_espaces)
		ft_putchar(' ');
	i = 0;
	ft_putchar('/');
	while (i++ < nb_etoiles)
		ft_putchar('*');
	if (nb_pipe == 0)
		ft_putchar('*');
	while (nb_pipe-- > 0)
		ft_putchar('|');
	if (bool == 1)
	{
		ft_putchar('$');
		ft_putchar('|');
	}
	while (nb_etoiles-- > 0)
		ft_putchar('*');
	ft_putchar('\\');
	while (nb_espaces-- > 0)
		ft_putchar(' ');
	ft_putchar('\n');
}

int		ftetage(int num_ligne, int num_etage, int taille_base, int sum_increase)
{
	int		nb_lignes_etage;
	int		nb_etoiles;

	nb_etoiles = num_ligne + sum_increase;
	nb_lignes_etage = ((num_etage + 6) * (num_etage + 1) / 2 - 1)
		- num_ligne + 1;
	while (nb_lignes_etage-- > 0)
	{
		afficher_ligne((taille_base - 2 - 2 * nb_etoiles - 1)
			/ 2, nb_etoiles, 0, 0);
		num_ligne++;
		nb_etoiles = nb_etoiles + 1;
	}
	if ((num_etage + 1) % 2 == 0)
		return ((num_etage + 1 + 2) / 2 + sum_increase);
	else
		return ((num_etage + 1 + 3) / 2 + sum_increase);
}

void	dern_etage(int etoiles, int taille_base, int tporte)
{
	int		num_ligne_print;

	num_ligne_print = 0;
	while (num_ligne_print < tporte / 2)
	{
		afficher_ligne((taille_base - 2 * (etoiles + num_ligne_print) - 2 - 1)
			/ 2, etoiles + num_ligne_print - (tporte - 1) / 2, tporte, 0);
		num_ligne_print++;
	}
	if (tporte > 3)
	{
		afficher_ligne((taille_base - 2 * (etoiles + num_ligne_print) - 2)
			/ 2, etoiles + num_ligne_print - (tporte - 1) / 2, tporte - 2, 1);
		num_ligne_print++;
	}
	while (num_ligne_print < tporte)
	{
		afficher_ligne((taille_base - 2 * (etoiles + num_ligne_print) - 2)
			/ 2, etoiles + num_ligne_print - (tporte - 1) / 2, tporte, 0);
		num_ligne_print++;
	}
}

void	sastantua(int size)
{
	int nline;
	int sumincrease;
	int nbetage;
	int i;

	nbetage = 0;
	nline = 0;
	sumincrease = 0;
	while (size > nbetage + 1)
	{
		sumincrease = ftetage(nline, nbetage, tlastline(size - 1), sumincrease);
		nline = nline + nbetage + 3;
		nbetage++;
	}
	if (size > 0)
	{
		i = 0;
		while (i++ < 2 + (size - 1) % 2)
			afficher_ligne((tlastline(size - 1) - (nline - 1 + i + sumincrease)
				* 2 - 1 - 2) / 2, nline - 1 + i + sumincrease, 0, 0);
		dern_etage(nline + i + sumincrease - 1, tlastline(size - 1), nbetage + 3
			- 2 - (size - 1) % 2);
	}
}
