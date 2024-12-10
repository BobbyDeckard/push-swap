/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:29:34 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 16:59:54 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	swap(t_stack **list)
{
	t_stack	*temp;

	temp = *list;
	*list = temp->next;
	temp->next = (temp->next)->next;
	temp->previous = *list;
	(*list)->previous = NULL;
	(*list)->next = temp;
}

void	sa(t_stack **a_stack)
{
	swap(a_stack);
}

void	sb(t_stack **b_stack)
{
	swap(b_stack);
}

void	ss(t_stack **a_stack, t_stack **b_stack)
{
	swap(a_stack);
	swap(b_stack);
}
