/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pre_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:17:47 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/18 17:33:02 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort(t_node	**head)
{
	t_node	*current;
	t_node	*to_check;

	current = *head;
	while (current)
	{
		to_check = *head;
		while (to_check)
		{
			if (current->data < to_check->data)
				to_check->index++;
			to_check = to_check->next;
		}
		current = current->next;
	}
}
