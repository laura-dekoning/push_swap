/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   five_sort.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:32:06 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:35:52 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	five_sort(t_node **stack_a, t_node **stack_b, int nodes, int fd)
{
	while (nodes > 0)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			ft_pb(stack_a, stack_b, fd);
		else
			ft_ra(stack_a, fd);
		nodes--;
	}
	three_sort(stack_a, fd);
	while (count_nodes(stack_b) != 0)
		ft_pa(stack_a, stack_b, fd);
	if ((*stack_a)->index > (*stack_a)->next->index)
		ft_sa(stack_a, fd);
}
