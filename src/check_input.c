/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_input.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:37:25 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/07 14:16:55 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	valid_input(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		if (argv[i][j] == '\0')
			return (false);
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == false)
				return (false);
			j++;
		}
		i++;
	}
	if (no_duplicates(argv) == false)
		return (false);
	return (true);
}
/*	In this no_duplicates functions we also check if the numbers
	are not larger then INT_MIN and INT_MAX so that it is not needed
	when we make the list. */

bool	no_duplicates(char **argv)
{
	int		i;
	int		j;
	long	n;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			n = ft_atol(argv[i]);
			if (n == ft_atol(argv[j]))
				return (false);
			else if (n < INT_MIN || n > INT_MAX)
				return (false);
			else
				j++;
		}
		i++;
	}
	return (true);
}
