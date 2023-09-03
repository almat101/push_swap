/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_345.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:15:50 by ale               #+#    #+#             */
/*   Updated: 2023/08/30 00:00:41 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4_num(t_stack **stack_a, t_stack **stack_b)
{
	int	dist;

	if (stack_is_sorted(stack_a))
		return ;
	dist = get_index_distance(stack_a, get_min_val(stack_a, -1));
	if (dist == 1)
		ra(stack_a);
	else if (dist == 2)
		{
			ra(stack_a);
			ra(stack_a);
		}
	else if (dist == 3)
		rra(stack_a);
	if (stack_is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_3_num(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5_num(t_stack **stack_a, t_stack **stack_b)
{
	int	dist;

	if (stack_is_sorted(stack_a))
		return;
	dist = get_index_distance(stack_a, get_min_val(stack_a, -1));
	if (dist == 1)
		ra(stack_a);
	else if( dist == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (dist == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (dist == 4)
		rra(stack_a);
	if (stack_is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_4_num(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_345(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = 0;
	if (stack_is_sorted(stack_a) || ft_stacksize(stack_a) == 0
		|| ft_stacksize(stack_a) == 1)
		return ;
	size = ft_stacksize(stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3_num(stack_a);
	else if (size == 4)
		sort_4_num(stack_a, stack_b);
	else if (size == 5)
		sort_5_num(stack_a, stack_b);
}
