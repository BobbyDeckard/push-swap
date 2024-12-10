/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:52:33 by imeulema          #+#    #+#             */
/*   Updated: 2024/12/10 14:11:51 by imeulema         ###   ########.fr       */
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

int	add_node_back(t_stack **stack, t_stack *new, int args);
int	check_arg_validity(char *str);
int	check_duplicates(t_stack *stack, int args);
t_stack	*end_program_a_stack(t_stack *stack, int args);
t_stack	*init_stack(int ac);
t_stack	*last_node(t_stack *stack, int args);
t_stack	*new_node(int content);
t_stack	*parse_args(int ac, char **av);
t_stack	*print_error(void);

#endif
