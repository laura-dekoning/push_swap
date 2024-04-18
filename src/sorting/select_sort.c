/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   select_sort.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:24:27 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/18 17:25:39 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	select_sort(t_node **stack_a, t_node **stack_b)
{
	int	nodes;

	nodes = count_nodes(stack_a);
	if (nodes == 2)
		sort_two(stack_a);
	else if (nodes == 3)
		sort_three(stack_a);
	else if (nodes == 4 || nodes == 5)
		sort_four_or_five(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}
