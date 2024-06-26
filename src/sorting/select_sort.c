/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   select_sort.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:24:27 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/24 17:04:11 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	select_sort(t_node **stack_a, t_node **stack_b)
{
	int	nodes;

	nodes = count_nodes(stack_a);
	if (nodes == 2)
		two_sort(stack_a);
	else if (nodes == 3)
		three_sort(stack_a);
	else if (nodes == 4)
		four_sort(stack_a, stack_b, nodes);
	else if (nodes == 5)
		five_sort(stack_a, stack_b, nodes);
	else
		radix_sort(stack_a, stack_b);
}
