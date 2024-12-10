/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:41:56 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 13:41:59 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_stack	*print_error(void)
{
	ft_putstr_fd("Error", 2);
	return (NULL);
}

t_stack	*new_node(int content)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	new->previous = NULL;
	return (new);
}

t_stack	*last_node(t_stack *stack, int args)
{
	int		iters;
	t_stack	*ptr;

	if (!stack)
		return (NULL);
	iters = 0;
	ptr = stack;
	while (++iters < args)
		ptr = ptr->next;
	return (ptr);
}

int	add_node_back(t_stack **stack, t_stack *new, int args)
{
	t_stack	*last;

	ft_printf("First node as given to add_back: %p\n", *stack);
	if (!new)
		return (0);
	last = last_node(*stack, args);
	ft_printf("Created new node\n\tContent: %d\n\tAddress: %p\nLast node found: %p\n", new->content, new, last);
	last->next = new;
	ft_printf("Policing *stack: %p\n", *stack);
	new->next = *stack;
	new->previous = last;
	ft_printf("New (%p) has been set as next for last (%p), first node (%p) set as next for new, last as previous for new\n", new, last, *stack);
	return (1);
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
