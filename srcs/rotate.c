/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:54:59 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 15:21:30 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	rotate(t_stack **list)
{
	t_stack	*stack;
	t_stack	temp;

	stack = *list;
	temp.content = stack->content;
	temp.fill = stack->fill;
	while (stack->id < (stack->next)->id)
	{
		stack->content = (stack->next)->content;
		stack->fill = (stack->next)->fill;
		stack = stack->next;
	}
	stack->content = temp.content;
	stack->fill = temp.fill;
}

void	reverse_rotate(t_stack **list)
{
	t_stack	*stack;
	t_stack	temp;

	stack = last_node(*list)
}
