/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:52:05 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 15:03:55 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	check_arg_validity(char *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
	}
	return (1);
}

t_stack	*print_error(void)
{
	ft_putstr_fd("Error", 2);
	return (NULL);
}

int	check_duplicates(t_stack *stack, int args)
{
	t_stack	*ptr;
	int	full_iters;
	int	inter_iters;

	full_iters = 0;
	while (++full_iters < args)
	{
		if (stack->next)
			ptr = stack->next;
		inter_iters = full_iters;
		while (++inter_iters < args)
		{
			if (ptr->content == stack->content)
				return (1);
			if (ptr->next)
				ptr = ptr->next;
		}
		stack = stack->next;
	}
	return (0);
}

t_stack	*init_stack(int ac)
{
	t_stack	**list;
	t_stack	*stack;
	int		iters;
	int		check;

	list = (t_stack **) malloc(sizeof(t_stack *));
	if (!list)
		return (NULL);
	stack = new_node(0, 0, 0);
	*list = stack;
	iters = 1;
	check = 0;
	while (++iters < ac)
		check += add_node_back(list, new_node(0, 0, iters - 1), iters - 1);
	if (check + 2 != ac)
	{
		ft_printf("Failed check init_stack\n");
		return (NULL);
	}
	return (stack);
}

//maybe dogshit
t_stack	*end_program_a_stack(t_stack *stack, int args)
{
	t_stack	*ptr;
	int		iters;

	iters = -1;
	while (++iters < args)
	{
		ptr = stack->next;
		stack->previous = NULL;
		stack->next = NULL;
		free(stack);
		stack = ptr;
	}
	return (print_error());
}
