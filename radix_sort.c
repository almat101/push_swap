/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:04:43 by ale               #+#    #+#             */
/*   Updated: 2023/08/30 23:38:43 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bits(t_stack **stack)
{
	t_stack	*head;
	int		max;
	int		bits;

	head = *stack;
	max = head->index;
	bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *head_a;
	int		i;
	int		j;
	int		size;
	int		bits;

	i = 0;
	head_a = *stack_a;
	size = ft_stacksize(stack_a);
	bits = get_bits(stack_a);
	while (i < bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_stacksize(stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stacksize(stack_a) < 6)
		sort_345(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}
