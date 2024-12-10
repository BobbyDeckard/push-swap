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

void	reverse_rotate(t_stack **list)
{
	add_front(list, last_node(*list));
	del_last(*list);
}
