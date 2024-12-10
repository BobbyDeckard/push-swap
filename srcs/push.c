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
	if (!b_stack || !*b_stack)
		return ;
	add_front(a_stack, *b_stack);
	del_first(b_stack);
	return ;
}
