/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:19:46 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/21 17:57:21 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list_input.h"
#include "main.h"

void    ft_print_list(t_list *link)///////////////////
{
	while (link != 0)
	{
		printf("link %s\n", link->stock);
		printf("%p\n", link);
		printf("%p\n", link->stock);	
		link = link->next;
	}
}


void	aff_tab(char *str)
{
	while (*str)
	{	
		if (*str == '\n')
			write(1, "@",1);
		else
			write(1, str, 1);
		str++;
	}

}


////////////////////////////////////////////////////////////////

t_list	*create_node(char *str)
{
	t_list *node;
	
	if (str == 0)
		return (0);
	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->stock = str;
		node->next = 0;
	}
	return (node);
}

void		add_node_end(t_list **begin, char *str)
{
	t_list *head;

	if (*begin == 0)
	{	
		*begin = create_node(str);
		return ;
	}
	head = *begin;
	while (head->next)
		head = head->next;
	head->next = create_node(str);
}

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
	int len;
	char *ret;

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



int		main(void)
{
	int size_read;
	int	tot_len;
	char buffer[BUFFER_SIZE + 1];
	t_list *list;
	char *tab;

	list = 0;
	tot_len = 0;
	while (((size_read = read(0, buffer, BUFFER_SIZE)) > 0))
	{
		if (size_read == -1)
			return (0);
		tot_len = tot_len + size_read;
		buffer[size_read] = '\0';
		printf("%d sizeread\n",size_read);
		printf("%s\n",buffer);
		add_node_end(&list, str_dup(buffer));
	}
	ft_print_list(list);

	if (!(tab = (char *)malloc(sizeof(char) * (tot_len + 1))))
		return (0);
	fill_tab(tab, list);
	aff_tab(tab);///////
	//////appel de fonction
	return (0);
}
