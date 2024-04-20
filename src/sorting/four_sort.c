/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   four_sort.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:33:49 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/20 17:03:33 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	four_sort(t_node **stack_a, t_node **stack_b, int nodes)
{
	while (nodes > 0)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a);
		nodes--;
	}
	two_sort(stack_a);
	while (count_nodes(stack_b) != 0)
		ft_pa(stack_a, stack_b);
	if ((*stack_a)->index > (*stack_a)->next->index)
		ft_sa(stack_a);
}
