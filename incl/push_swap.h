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

int	check_args(int ac, char **av);
int	check_duplicates(int ac, char **av);
int	check_validity(int ac, char **av);
int	parse_add_back(t_stack **stack, t_stack *new);
void	add_back(t_stack **list, t_stack *new);
void	add_front(t_stack **list, t_stack *new);
void	del_first(t_stack **list);
void	del_last(t_stack *stack);
void	pa(t_stack **a_stack, t_stack **b_stack);
void	pb(t_stack **a_stack, t_stack **b_stack);
void	ra(t_stack **a_stack);
void	rb(t_stack **b_stack);
void	rr(t_stack **a_stack, t_stack **b_stack);
void	rra(t_stack **a_stack);
void	rrb(t_stack **b_stack);
void	rrr(t_stack **a_stack, t_stack **b_stack);
void	sa(t_stack **a_stack);
void	sb(t_stack **b_stack);
void	ss(t_stack **a_stack, t_stack **b_stack);
t_stack	*last_node(t_stack *stack);
t_stack	*new_node(int content);
t_stack	*parse_args(int ac, char **av);

#endif
