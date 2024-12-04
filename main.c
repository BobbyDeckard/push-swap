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

int	main(int ac, char **av)
{
	int		a_id;
	t_stack	*a_stack;

	ft_printf("Makefile works!\n");
	if (ac == 1)
		return (0);
	a_id = 0;
	a_stack = NULL;
	while (a_id + 1 < ac)
	{
		if (check_arg_validity(av[a_id + 1])
			&& fill_stack(a_stack, av[a_id + 1], a_id))
			a_id++;
		else
			return (end_program_a_stack(a_stack, a_id));
	}
	if (!check_duplicates(a_stack, a_id))
		return (end_program_a_stack(a_stack, a_id));
	return (0);
}
