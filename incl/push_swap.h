/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:52:33 by imeulema          #+#    #+#             */
/*   Updated: 2024/11/29 11:52:35 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../srcs/libft/libft.h"

typedef struct s_stack
{
	int				content;
	int				id;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

int	check_arg_validity(char *str);
int	check_duplicates(t_stack *stack, int id);
int	end_program_a_stack(t_stack *stack, int id);
int	fill_stack(t_stack *stack, char *str, int id);
int	print_error(void);

#endif
