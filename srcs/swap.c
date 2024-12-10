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
	return ;
}
