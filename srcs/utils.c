/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:52:05 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 13:38:34 by imeulema         ###   ########.fr       */
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

t_stack	*parse_args(int ac, char **av)
{
	t_stack	**list;
	int		arg;

	list = (t_stack **) malloc(sizeof(t_stack *));
	if (!list)
		return (NULL);
	*list = new_node(ft_atoi(av[1]));
	ft_printf("Created first node:\n\tContent = %d\n\tAddress: %p\n", (*list)->content, *list);
	arg = 1;
	while (++arg < ac)
	{
		if (check_arg_validity(av[arg]))
			add_node_back(list, new_node(ft_atoi(av[arg])), arg - 1);
		else
			return (end_program_a_stack(*list, arg));
	}
	return (*list);
}
