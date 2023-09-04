/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:26:35 by amatta            #+#    #+#             */
/*   Updated: 2023/09/04 13:41:08 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}			t_stack;

void	error(char *msg);
void	print_stack(t_stack **stack);
void	args_checker(int argc, char **argv);
void	init_stack(t_stack **stack, int argc, char **argv);
int		ft_isnum(char *av);
int		ft_isdup(char **argv);
int		ft_limits(char **av);
void	ft_free(char **split);
t_stack	*ft_stacknew(int value);
t_stack	*ft_stacklast(t_stack *head);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
t_stack	*get_next_min(t_stack **stack);
void	set_index_from_min(t_stack **stack);
void	ft_free_stack(t_stack **stack);
int		stack_is_sorted(t_stack **stack);
int		ft_stacksize(t_stack **stack);
void	ft_swap(int *a, int *b);
void	swap(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_stacklast(t_stack *stack);
void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rev_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_stackaddfront(t_stack **stack, t_stack *new);
void	push(t_stack **stack_to, t_stack **stack_from);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
int		get_min_val(t_stack **stack, int value);
void	sort_132(t_stack **stack_a);
void	sort_231(t_stack **stack_a, t_stack *head, int min);
void	sort_312(t_stack **stack_a, t_stack *head, int min);
void	sort_3_num(t_stack **stack_a);
int		get_index_distance(t_stack **stack, int index);
void	sort_4_num(t_stack **stack_a, t_stack **stack_b);
void	sort_5_num(t_stack **stack_a, t_stack **stack_b);
void	sort_345(t_stack **stack_a, t_stack **stack_b);
int		get_bits(t_stack **stack);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
void	sort(t_stack **stack_a, t_stack **stack_b);
#endif
