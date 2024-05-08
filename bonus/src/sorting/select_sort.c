/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   select_sort.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:24:27 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:37:21 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	select_sort(t_node **stack_a, t_node **stack_b, int fd)
{
	int	nodes;

	nodes = count_nodes(stack_a);
	if (nodes == 2)
		two_sort(stack_a, fd);
	else if (nodes == 3)
		three_sort(stack_a, fd);
	else if (nodes == 4)
		four_sort(stack_a, stack_b, nodes, fd);
	else if (nodes == 5)
		five_sort(stack_a, stack_b, nodes, fd);
	else
		radix_sort(stack_a, stack_b, fd);
}
