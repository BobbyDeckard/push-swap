/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:41:56 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 17:08:22 by imeulema         ###   ########.fr       */
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

t_stack	*last_node(t_stack *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	add_node_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!new)
		return (0);
	ft_printf("Stack address: %p\n", stack);
	last = last_node(*stack);
	ft_printf("Stack address: %p\n", stack);
	last->next = new;
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
	*list = new_node(ft_atoi(av[1]));
	arg = 1;
	check = 0;
	while (++arg < ac)
		check += add_node_back(list, new_node(ft_atoi(av[arg])));
	if (check + 2 != arg)
	{
		ft_printf("Failed check parse_args\n");
		return (NULL);
	}
	return (*list);
}
