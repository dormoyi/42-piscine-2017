/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:26:37 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/14 08:30:53 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int			i;
	char		*name;

	(void)argc;
	i = 0;
	name = argv[0];
	while (name[i])
	{
		ft_putchar(name[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
