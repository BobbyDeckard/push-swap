/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:41:56 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 14:14:50 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_stack	*new_node(int content)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	new->previous = NULL;
	return (new);
}

t_stack	*last_node(t_stack *stack, int args)
{
	int		iters;
	t_stack	*ptr;

	if (!stack)
		return (NULL);
	iters = 0;
	ptr = stack;
	while (++iters < args)
		ptr = ptr->next;
	return (ptr);
}

int	add_node_back(t_stack **stack, t_stack *new, int args)
{
	t_stack	*last;

	if (!new)
		return (0);
	last = last_node(*stack, args);
	last->next = new;
	new->next = *stack;
	new->previous = last;
	return (1);
}

t_stack	*parse_args(int ac, char **av)
{
	t_stack	**list;
	int		arg;
	int		check;

	list = (t_stack **) malloc(sizeof(t_stack *));
	if (!list)
		return (NULL);
	if (check_arg_validity(av[1]))
		*list = new_node(ft_atoi(av[1]));
	else
		return (print_error());
	arg = 1;
	check = 0;
	while (++arg < ac)
	{
		if (check_arg_validity(av[arg]))
			check += add_node_back(list, new_node(ft_atoi(av[arg])), arg - 1);
		else
			return (print_error());
	}
	if (check + 2 != arg)
	{
		ft_printf("Failed check parse_args\n");
		return (NULL);
	}
	return (*list);
}
