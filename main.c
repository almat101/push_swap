/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:29:55 by amatta            #+#    #+#             */
/*   Updated: 2023/09/04 15:07:43 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (argc == 1)
		return (1);
	args_checker(argc, argv);
	stack_a = (t_stack **)malloc(sizeof(t_stack *));
	*stack_a = NULL;
	init_stack(stack_a, argc, argv);
	if (stack_is_sorted(stack_a))
	{
		ft_free_stack(stack_a);
		exit(EXIT_SUCCESS);
	}
	stack_b = (t_stack **)malloc(sizeof(t_stack *));
	*stack_b = NULL;
	sort(stack_a, stack_b);
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
}
