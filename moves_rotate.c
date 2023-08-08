/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:18:53 by amatta            #+#    #+#             */
/*   Updated: 2023/08/08 14:00:34 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	if (ft_stacksize(stack) >= 2)
	{
		t_stack *last;

		last = ft_stacklast(*stack);
		last->next = (*stack);
		(*stack) = (*stack)->next;
		last->next->next = NULL;
	}
}

void	ra(t_stack **stack_a)
{
	if (ft_stacksize(stack_a) >= 2)
	{
		rotate(stack_a);
		ft_printf("ra\n");
	}
}

void	rb(t_stack **stack_b)
{
	if (ft_stacksize(stack_b) >= 2)
	{
		rotate(stack_b);
		ft_printf("rb\n");
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stacksize(stack_a) >= 2 && ft_stacksize(stack_b)>= 2)
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_printf("rr\n");
	}
}
