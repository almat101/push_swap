/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:29:55 by amatta            #+#    #+#             */
/*   Updated: 2023/08/08 14:59:20 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (argc == 1)
		return (1);
	args_checker(argc,argv);
	stack_a = (t_stack **)malloc(sizeof(t_stack *));
	*stack_a = NULL;
	init_stack(stack_a,argc,argv);
	stack_b = (t_stack **)malloc(sizeof(t_stack *));
	*stack_b = NULL;
	print_stack(stack_a);
	ra(stack_a);
	sa(stack_a);
	rra(stack_a);
	printf("stack_a size %d\n",ft_stacksize(stack_a));
	print_stack(stack_a);
	printf("stack_b size %d\n",ft_stacksize(stack_b));
	print_stack(stack_b);
	//if(stack_is_sorted(stack_a))
	//	exit(EXIT_SUCCESS);
	ft_free_stack(stack_a);
}
