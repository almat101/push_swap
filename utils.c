/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale <ale@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:10:58 by amatta            #+#    #+#             */
/*   Updated: 2023/08/30 23:39:48 by ale              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack **stack)
{
	t_stack *curr;

	curr = *stack;
	while (curr != NULL)
	{
		ft_printf("Stack value %d stack index %d\n", curr->value, curr->index);
		curr = curr->next;
	}
	ft_printf("NULL\n");
}

int	stack_is_sorted(t_stack **stack)
{
	t_stack *curr;

	curr = *stack;
	while (curr && curr->next)
	{
		if(curr->value > curr->next->value)
			return (0);
		curr = curr->next;
	}
	return (1);
}

int	get_min_val(t_stack **stack, int value)
{
	t_stack	*head;
	int		min_value;

	head = *stack;
	min_value = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min_value) && head->index != value)
			min_value = head->index;
	}
	return (min_value);
}

int	get_index_distance(t_stack **stack, int index)
{
	t_stack	*head;
	int		dist;

	head = *stack;
	dist = 0;
	while (head)
	{
		if (head->index == index)
			break;
		dist++;
		head = head->next;
	}
	return (dist);
}

void	error(char *msg)
{
	ft_printf(msg);
	exit(1);
}
