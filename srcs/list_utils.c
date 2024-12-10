#include "../incl/push_swap.h"

void	add_front(t_stack **list, t_stack *new)
{
	new->next = *list;
	(*list)->previous = new;
	*list = new;
}

void	add_back(t_stack **list, t_stack *new)
{
	t_stack	*last;

	last = last_node(*list);
	last->next = new;
	new->previous = last;
	new->next = NULL;
}

void	del_first(t_stack **list)
{
	t_stack	*del;

	del = *list;
	*list = del->next;
	(*list)->previous = NULL;
	free(del);
}

void	del_last(t_stack *stack)
{
	t_stack	*del;

	del = last_node(stack);
	(del->previous)->next = NULL;
	free(del);
}
