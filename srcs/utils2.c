/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:14:50 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/04 12:14:52 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	print_error(void)
{
	ft_putstr_fd("Error", 2);
	return (0);
}

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

t_stack	*last_node(t_stack **stack, int args)
{
	int	iters;


	if (!stack)
		return (NULL);
	iters = -1;
	while (++iters < args)
		*stack = (*stack)->next;
	return (*stack);
}

int	add_node_back(t_stack **stack, t_stack *new, int args)
{
	t_stack	*last;

	if (!new)
		return (0);
	last = last_node(stack, args);
	if (!last)
		*stack = new;
	else
	{
		last->next = new;
		new->next = *stack;
		new->previous = last;
	}
	return (1);
}
