/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:18:07 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/18 11:45:18 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		compare_str(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2)
		return (1);
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*tmp;

	i = 0;
	while (*(tab + i + 1))
	{
		if (compare_str(tab[i], tab[i + 1]) == 1)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			if (i > 0)
				i = i - 2;
		}
		i++;
	}
}
