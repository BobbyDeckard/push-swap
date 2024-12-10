/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:29:34 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 15:06:35 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	swap(t_stack *stack)
{
	int	temp;

	temp = stack->content;
	stack->content = (stack->next)->content;
	(stack->next)->content = temp;
	temp = stack->fill;
	stack->fill = (stack->next)->fill;
	(stack->next)->fill = temp;
	return ;
}
