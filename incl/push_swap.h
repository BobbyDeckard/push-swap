/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:52:33 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 16:49:27 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../srcs/libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

int	add_node_back(t_stack **stack, t_stack *new);
int	check_args(int ac, char **av);
int	check_duplicates(int ac, char **av);
int	check_validity(int ac, char **av);
t_stack	*last_node(t_stack *stack);
t_stack	*new_node(int content);
t_stack	*parse_args(int ac, char **av);

#endif
