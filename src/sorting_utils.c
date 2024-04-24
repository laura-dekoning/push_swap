/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_utils.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 16:38:34 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/24 17:08:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_nodes(t_node **head)
{
	t_node	*current_node;
	int		nodes;

	if (head == NULL)
		return (0);
	nodes = 0;
	current_node = *head;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		nodes++;
	}
	return (nodes);
}

int	is_list_sorted(t_node *head)
{
	while (head != NULL && head->next != NULL)
	{
		if (head->data > head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}

t_node	*is_lowest_index(t_node **stack_a)
{
	t_node	*lowest;
	t_node	*current;

	lowest = *stack_a;
	current = *stack_a;
	while (current)
	{
		if (current->index < lowest->index)
			lowest = current;
		current = current->next;
	}
	return (lowest);
}
