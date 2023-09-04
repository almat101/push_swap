/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:06:10 by amatta            #+#    #+#             */
/*   Updated: 2023/09/04 13:30:07 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *av)
{
	int	i;

	i = 0;
	while (av[i] == 32)
		i++;
	if (av[i] == '-')
		i++;
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isdup(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (!ft_strncmp(av[i], av[j], 10))
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	ft_limits(char **av)
{
	int		i;
	long	nbr;

	i = 0;
	while (av[i])
	{
		nbr = ft_atol(av[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

void	args_checker(int argc, char **argv)
{
	int		i;
	long	nbr;
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
		if (!ft_isnum(av[i]) || !ft_isdup(av) || !ft_limits(av))
			error("Error\n");
		i++;
	}
	if (argc == 2)
		ft_free(av);
}
