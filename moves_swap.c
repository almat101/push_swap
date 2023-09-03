/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:18:56 by amatta            #+#    #+#             */
/*   Updated: 2023/09/03 17:50:20 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	swap(t_stack **stack)
{
	if(ft_stacksize(stack) >= 2)
	{
		ft_swap(&(*stack)->value, &(*stack)->next->value);
		ft_swap(&(*stack)->index, &(*stack)->next->index);
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
