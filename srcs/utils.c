/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:52:05 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 16:48:26 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	check_args(int ac, char **av)
{
	int	index;
	int	arg;

	arg = 0;
	while (++arg < ac)
	{
		index = -1;
		while (av[arg][++index])
		{
			if (av[arg][index] < 48 || av[arg][index] > 57)
				return (1);
		}
	}
	return (0);
}

int	check_duplicates(int ac, char **av)
{
	int	*args;
	int	index;
	int	comp_index;

	args = (int *) malloc((ac - 1) * sizeof(int));
	if (!args) // could maybe generate an error with correct input...
		return (1);
	index = -1;
	while (++index + 1 < ac)
		args[index] = ft_atoi(av[index + 1]);
	index = -1;
	while (++index + 2 < ac)
	{
		comp_index = index;
		while (++comp_index + 1 < ac)
		{
			if (args[index] == args[comp_index])
				return (1);
		}
	}
	return (0);
}

int	check_validity(int ac, char **av)
{
	int	check;

	check = check_args(ac, av) + check_duplicates(ac, av);
	if (check > 0)
		ft_putstr_fd("Error", 2);
	return (check);
}
