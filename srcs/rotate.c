/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:54:59 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 17:17:02 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	rotate(t_stack **list)
{
	add_back(list, *list);
	del_first(list);
}

void	ra(t_stack **a_stack)
{
	rotate(a_stack);
}

void	rb(t_stack **b_stack)
{
	rotate(b_stack);
}

void	rr(t_stack **a_stack, t_stack **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
}
