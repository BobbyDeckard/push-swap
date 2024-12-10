/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:46:54 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 15:07:33 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	push(t_stack *a_stack, t_stack *b_stack)
{
	if (b_stack->fill == 0)
		return ;
	a_stack->content = b_stack->content;
	a_stack->fill = 1;
	b_stack->content = 0;
	b_stack->fill = 0;
	return ;
}
