#include "../incl/push_swap.h"

void	reverse_rotate(t_stack **list)
{
	add_front(list, last_node(*list));
	del_last(*list);
}

void	rra(t_stack **a_stack)
{
	reverse_rotate(a_stack);
}

void	rrb(t_stack **b_stack)
{
	reverse_rotate(b_stack);
}

void	rrr(t_stack **a_stack, t_stack **b_stack)
{
	reverse_rotate(a_stack);
	reverse_rotate(b_stack);
}
