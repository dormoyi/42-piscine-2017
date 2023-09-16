/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:57:47 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/14 08:25:34 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		compare2strings(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	if (str1[i] < str2[i])
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*buffer;

	i = 1;
	while (i + 1 < argc)
	{
		if (compare2strings(argv[i], argv[i + 1]) == 1)
		{
			buffer = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = buffer;
			if (i != 1)
				i = i - 2;
		}
		i++;
	}
	if (argc > 1)
	{
		while (i > 0)
		{
			ft_putstr(argv[i]);
			i--;
		}
	}
	return (0);
}
