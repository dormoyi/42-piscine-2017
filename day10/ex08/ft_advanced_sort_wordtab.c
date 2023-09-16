/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:13:42 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/18 22:25:10 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*tmp;

	i = 0;
	while (*(tab + i + 1))
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = *(tab + i);
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			if (i > 0)
				i = i - 2;
		}
		i++;
	}
}
