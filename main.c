/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:48:53 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/04 09:48:57 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

void	print_stack(t_stack *stack, int args)
{
	int	iters;

	iters = -1;
	while (++iters < args)
	{
		ft_printf("Node %d: %d\n", iters, stack->content);
		stack = stack->next;
	}
}

int	main(int ac, char **av)
{
	int		arg;
	t_stack	**a_stack;

	ft_printf("Makefile works!\n");
	if (ac == 1)
		return (0);
	arg = 1;
	a_stack = NULL;
	while (arg < ac)
	{
		if (check_arg_validity(av[arg]) && fill_stack(a_stack, av[arg], arg - 1))
			arg++;
		else
			return (end_program_a_stack(*a_stack, arg - 1));
	}
	if (!check_duplicates(*a_stack, arg - 1))
		return (end_program_a_stack(*a_stack, arg - 1));
	print_stack(*a_stack, arg - 1);
	return (0);
}
