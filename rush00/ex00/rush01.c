/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:10:13 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/08 16:41:26 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char a);

void	ft_premiere_ligne(int nb_colonnes)
{
	int		colonne;

	colonne = 0;
	if (nb_colonnes > 0)
	{
		ft_putchar('/');
		colonne++;
	}
	while (colonne < nb_colonnes - 1)
	{
		ft_putchar('*');
		colonne++;
	}
	if (colonne + 1 == nb_colonnes)
		ft_putchar('\\');
	if (nb_colonnes > 0)
		ft_putchar('\n');
}

void	ft_ligne_milieu(int nb_colonnes)
{
	int colonne;

	colonne = 0;
	if (nb_colonnes > 0)
	{
		ft_putchar('*');
		colonne++;
	}
	while (colonne < nb_colonnes - 1)
	{
		ft_putchar(' ');
		colonne++;
	}
	if (colonne + 1 == nb_colonnes)
		ft_putchar('*');
	if (nb_colonnes > 0)
		ft_putchar('\n');
}

void	ft_derniere_ligne(int nb_colonnes)
{
	int		colonne;

	colonne = 0;
	if (nb_colonnes > 0)
	{
		ft_putchar('\\');
		colonne++;
	}
	while (colonne < nb_colonnes - 1)
	{
		ft_putchar('*');
		colonne++;
	}
	if (colonne + 1 == nb_colonnes)
		ft_putchar('/');
	if (nb_colonnes > 0)
		ft_putchar('\n');
}

void	rush01(int nb_colonnes, int nb_lignes)
{
	int		ligne;

	ligne = 0;
	if (nb_lignes > 0)
	{
		ft_premiere_ligne(nb_colonnes);
		ligne++;
	}
	while (ligne < nb_lignes - 1)
	{
		ft_ligne_milieu(nb_colonnes);
		ligne++;
	}
	if (ligne + 1 == nb_lignes)
	{
		ft_derniere_ligne(nb_colonnes);
	}
}
