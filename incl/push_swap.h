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

int	check_arg_validity(char *str);
int	check_duplicates(t_stack *stack, unsigned int id);
int	end_program_a_stack(t_stack *stack, unsigned int id);
int	fill_stack(t_stack *stack, char *str, unsigned int id);
int	print_error(void);

typedef struct s_stack
{
	int				content;
	unsigned int	id;
	t_stack			*next;
	t_stack			*previous;
}	t_stack

#endif
