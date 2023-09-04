/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:17:02 by amatta            #+#    #+#             */
/*   Updated: 2023/09/04 15:04:42 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack **stack, int argc, char **argv)
{
	int		i;
	t_stack	*new_stack;
	char	**av;

	i = 0;
	if (argc == 2)
		av = ft_split(argv[1], 32);
	else
	{
		i = 1;
		av = argv;
	}
	while (av[i])
	{
		new_stack = ft_stacknew(ft_atoi(av[i]));
		ft_stackadd_back(stack, new_stack);
		i++;
	}
	set_index_from_min(stack);
	if (argc == 2)
		ft_free(av);
}

void	set_index_from_min(t_stack **stack)
{
	t_stack	*curr;
	int		index;

	index = 0;
	curr = get_next_min(stack);
	while (curr)
	{
		curr->index = index++;
		curr = get_next_min(stack);
	}
}

t_stack	*get_next_min(t_stack **stack)
{
	t_stack	*curr;
	t_stack	*min_stack;
	int		flag;

	min_stack = NULL;
	flag = 0;
	curr = *stack;
	if (curr)
	{
		while (curr)
		{
			if ((!flag || curr->value < min_stack->value) && curr->index == -1)
			{
				min_stack = curr;
				flag = 1;
			}
			curr = curr->next;
		}
	}
	return (min_stack);
}
