/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rev_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:03:38 by amatta            #+#    #+#             */
/*   Updated: 2023/08/08 13:12:18 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **stack)
{
	if (ft_stacksize(stack) >= 2)
	{
		t_stack *last;
		t_stack	*prev_last;

		last = ft_stacklast(*stack);
		prev_last = *stack;
		while (prev_last->next->next)
			prev_last = prev_last->next;
		prev_last->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}

void	rra(t_stack **stack_a)
{
	if (ft_stacksize(stack_a) >= 2)
	{
		rev_rotate(stack_a);
		ft_printf("rra\n");
	}
}

void	rrb(t_stack **stack_b)
{
	if (ft_stacksize(stack_b) >= 2)
	{
		rev_rotate(stack_b);
		ft_printf("rrb\n");
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stacksize(stack_a) >= 2 && ft_stacksize(stack_b) >= 2)
	{
		rev_rotate(stack_a);
		rev_rotate(stack_b);
		ft_printf("rrr\n");
	}
}
