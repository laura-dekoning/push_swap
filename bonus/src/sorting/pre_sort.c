/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pre_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:17:47 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:22:17 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pre_sort(t_node	**head)
{
	t_node	*current;
	t_node	*to_check;

	current = *head;
	to_check = *head;
	while (current)
	{
		while (to_check)
		{
			if (current->data < to_check->data)
				to_check->index++;
			to_check = to_check->next;
		}
		current = current->next;
		to_check = *head;
	}
}
