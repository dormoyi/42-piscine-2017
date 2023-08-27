/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:22:22 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 11:46:04 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int octs;
	char *stock;
	int nbocts;
	int de;

	nbocts = read(0, stock, 45);
	stock[nbocts] = '\0';
	printf("%s\n",stock);
	de = read(0, stock, 45);
	printf("%d\n",de);
	return (0);
}
