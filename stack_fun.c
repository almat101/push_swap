/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:12:08 by amatta            #+#    #+#             */
/*   Updated: 2023/08/08 14:13:23 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

t_stack *ft_stacklast(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack *tmp;

	if (*stack != NULL)
	{
		tmp = ft_stacklast(*stack);
		tmp->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

int	ft_stacksize(t_stack **stack)
{
	t_stack	*curr;
	int		i;

	i = 0;
	curr = *stack;
	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}

void	ft_stackaddfront(t_stack **stack, t_stack *new)
{
	if (!new)
		return;
	new->next = *stack;
	(*stack) = new;
}
