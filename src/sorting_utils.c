/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_utils.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 16:38:34 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/18 17:16:59 by lade-kon      ########   odam.nl         */
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
	while (current_node->next != NULL)
	{
		nodes++;
		current_node = current_node->next;
	}
	return (nodes);
}

bool	is_list_sorted(t_node *head)
{
	while (head != NULL && head->next != NULL)
	{
		if (head->data > head->next->data)
			return (false);
		head = head->next;
	}
	return (true);
}

t_node	*is_lowest_index(t_node **stack_a)
{
	t_node	*lowest;
	t_node	*current;
}
