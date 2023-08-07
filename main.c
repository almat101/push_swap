/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:29:55 by amatta            #+#    #+#             */
/*   Updated: 2023/08/07 16:17:02 by amatta           ###   ########.fr       */
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
	print_stack(stack_a);
	sa(stack_a);
	print_stack(stack_a);
	printf("stack size %d\n",ft_stacksize(stack_a));
	//if(stack_is_sorted(stack_a))
	//	exit(EXIT_SUCCESS);
	ft_free_stack(stack_a);
}
