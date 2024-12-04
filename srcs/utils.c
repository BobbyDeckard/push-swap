/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:52:05 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/04 11:52:06 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	check_arg_validity(char *str)
{
	unsigned int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 48 && str[i] > 57)
			return (0);
	}
	return (1);
}

int	check_duplicates(t_stack *stack, unsigned int id)
{
	t_stack	dup;

	while (stack->id + 1 < id)
	{
		dup = *(stack->next);
		while (dup.id < id)
		{
			if (dup.content == stack->content)
				return (1);
			dup = *(dup.next);
		}
		stack = stack->next;
	}
	return (0);
}

int	end_program_a_stack(t_stack *stack, unsigned int id)
{
	t_stack			*ptr;
	unsigned int	iterations;

	iterations = -1;
	while (++iterations < id)
	{
		if (stack->next)
			ptr = stack->next;
		stack->previous = NULL;
		stack->next = NULL;
		free(stack);
	}
	return (print_error());
}

int	fill_stack(t_stack *stack, char *str, unsigned int id)
{
	if (!stack)
		stack = (t_stack *) malloc(sizeof(t_stack));
	if (!stack)
		return (0);
}
