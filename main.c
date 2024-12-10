/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:48:53 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 16:47:18 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	print_stack(t_stack *stack)
{
	t_stack	*copy;
	int		node;

	copy = stack;
	node = 0;
	while (copy)
	{
		ft_printf("Node %d (%p): %d\n", node, copy, copy->content);
		copy = copy->next;
		node++;
	}
}

int	main(int ac, char **av)
{	
	t_stack	*a_stack;

	if (ac == 1 || check_validity(ac, av))
		return (1);
	a_stack = parse_args(ac, av);
	if (!a_stack)
		return (1);
	print_stack(a_stack);
	return (0);
}
