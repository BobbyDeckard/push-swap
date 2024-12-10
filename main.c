/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:48:53 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 13:44:43 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	print_stack(t_stack *stack, int args)
{
	int	iters;

	iters = -1;
	while (++iters < args)
	{
		ft_printf("Node %d (%p): %d\n", iters, stack, stack->content);
		stack = stack->next;
	}
}

int	main(int ac, char **av)
{	
	t_stack	*a_stack;

	if (ac == 1)
		return (1);
	a_stack = parse_args(ac, av);
	if (!a_stack)
		return (1);
	print_stack(a_stack, ac - 1);
	return (0);
}
