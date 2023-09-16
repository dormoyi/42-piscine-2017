/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:45:48 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/13 16:28:51 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour % 12 == 0)
		printf("12.00 ");
	else
		printf("%d.00 ", hour % 12);
	if (hour / 12 == 1)
		printf("P.M.");
	else
		printf("A.M.");
	printf(" AND ");
	if ((hour + 1) % 12 == 0)
		printf("12.00 ");
	else
		printf("%d.00 ", (hour + 1) % 12);
	if ((hour + 1) / 12 == 1)
		printf("P.M.\n");
	else
		printf("A.M.\n");
}
