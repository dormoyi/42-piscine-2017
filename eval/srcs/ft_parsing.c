/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idormoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:33:22 by idormoy           #+#    #+#             */
/*   Updated: 2018/07/22 23:33:26 by idormoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

t_eval	*ft_create_elem(char *data)
{
	t_eval *new;

	if ((new = (t_eval*)(malloc(sizeof(t_eval) * 1))) == NULL)
		return (NULL);
	if ((ft_atoi(data)) != 0)
	{
		new->number = ft_atoi(data);
		new->data = '0';
		new->type = -1;
	}
	else if (ft_is_op(*data))
	{
		new->type = 1;
		new->data = *data;
	}
	else if (*data == '(' || *data == ')')
	{
		new->type = 0;
		new->data = *data;
	}
	new->used = 0;
	new->next = NULL;
	return (new);
}

void	ft_list_push_back(t_eval **begin_list, char *data)
{
	t_eval *new;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	new = *begin_list;
	while (new->next)
		new = new->next;
	new->next = ft_create_elem(data);
}

t_eval	*ft_parse_string(char *str)
{
	int		index;
	int		nb;
	t_eval	*begin;

	nb = 0;
	begin = ft_create_elem("(");
	begin->next = ft_create_elem("(");
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] != ' ')
			ft_list_push_back(&begin, &str[index]);
		if (ft_atoi(&str[index]) != 0)
		{
			if (str[index] == '+' || str[index] == '-')
				index++;
			while (ft_is_number(str[index]))
				index++;
		}
		else
			index++;
	}
	ft_list_push_back(&begin, ")");
	ft_list_push_back(&begin, ")");
	return (begin);
}
