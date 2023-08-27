/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:19:46 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 19:37:54 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list_input.h"
#include "main.h"
#include "link_func.h"

char		*str_cpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}

char		*str_dup(char *str)
{
	int		len;
	char	*ret;

	len = 0;
	while (str[len])
		len++;
	if (!(ret = malloc(sizeof(char) * (len + 1))))
		return (0);
	str_cpy(ret, str);
	return (ret);
}

void		fill_tab(char *tab, t_list *list)
{
	while (list)
	{
		tab = str_cpy(tab, list->stock);
		list = list->next;
	}
	*tab = '\0';
}

int			main(void)
{
	int		size_read;
	int		tot_len;
	char	buffer[BUFFER_SIZE + 1];
	t_list	*list;
	char	*tab;

	list = 0;
	tot_len = 0;
	while (((size_read = read(0, buffer, BUFFER_SIZE)) > 0))
	{
		if (size_read == -1)
			return (0);
		tot_len = tot_len + size_read;
		buffer[size_read] = '\0';
		if ((add_node_end(&list, str_dup(buffer))) == 0)
			return (0);
	}
	if (!(tab = (char *)malloc(sizeof(char) * (tot_len + 1))))
		return (0);
	fill_tab(tab, list);
	free_list(&list);
	//////appel de fonction
	return (0);
}
