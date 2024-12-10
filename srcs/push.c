/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:46:54 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 17:13:20 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	push(t_stack **a_stack, t_stack **b_stack)
{
	add_front(a_stack, *b_stack);
	del_first(b_stack);
}

void	pa(t_stack **a_stack, t_stack **b_stack)
{
	push(a_stack, b_stack);
}

void	pb(t_stack **a_stack, t_stack **b_stack)
{
	push(b_stack, a_stack);
}
