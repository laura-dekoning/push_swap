/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:27:12 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/20 16:21:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_node **stack_a, t_node **stack_b, int nodes)
{
	int		bit;

	bit = 1;
	while (!is_list_sorted(*stack_a))
	{
		while (nodes)
		{
			if ((*stack_a)->index & bit)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			nodes--;
		}
		bit <<= 1;
		while (*stack_b != NULL)
			ft_pa(stack_a, stack_b);
	}
}
