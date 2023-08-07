/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:18:56 by amatta            #+#    #+#             */
/*   Updated: 2023/08/07 16:06:25 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	if(ft_stacksize(stack) >= 2)
	{
		int tmp_value;
		int tmp_index;

		tmp_value = (*stack)->value;
		tmp_index = (*stack)->index;
		(*stack)->value = (*stack)->next->value;
		(*stack)->index = (*stack)->next->index;
		(*stack)->next->value = tmp_value;
		(*stack)->next->index = tmp_index;
	}
}

void	sa(t_stack **stack_a)
{
	if (ft_stacksize(stack_a) >= 2)
	{
		swap(stack_a);
		ft_printf("sa\n");
	}
}

void	sb(t_stack **stack_b)
{
	if (ft_stacksize(stack_b) >= 2)
	{
		swap(stack_b);
		ft_printf("sb\n");
	}
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stacksize(stack_a) >= 2 && ft_stacksize(stack_b) >= 2)
	{
		sa(stack_a);
		sb(stack_b);
		ft_printf("ss");
	}
}
