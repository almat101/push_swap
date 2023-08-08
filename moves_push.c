/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:18:48 by amatta            #+#    #+#             */
/*   Updated: 2023/08/08 14:37:11 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*tmp;

	if (ft_stacksize(stack_from) == 0)
		return ;
	tmp = *stack_from;
	*stack_from = (*stack_from)->next;
	ft_stackaddfront(stack_to,tmp);
	*stack_to = tmp;
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
		push(stack_a, stack_b);
		ft_printf("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b,stack_a);
	ft_printf("pb\n");
}
