/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:26:35 by amatta            #+#    #+#             */
/*   Updated: 2023/08/04 15:42:42 by amatta           ###   ########.fr       */
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
t_stack *ft_stacklast(t_stack *head);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
t_stack	*get_min_value(t_stack **stack);
void	set_index_from_min(t_stack **stack);
void	ft_free_stack(t_stack **stack);

#endif
