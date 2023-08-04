/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:10:58 by amatta            #+#    #+#             */
/*   Updated: 2023/08/04 17:13:16 by amatta           ###   ########.fr       */
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

void	ft_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	ft_free_stack(t_stack  **stack)
{
	t_stack *curr;
	t_stack *tmp;

	curr = *stack;
	while (curr != NULL)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
	}
	free(stack);
}

