/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_all.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 16:23:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/18 16:27:52 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node **head)
{
	t_node	*temp;
	t_node	*next;

	temp = *head;
	next = NULL;
	while (temp)
	{
		next = temp->next;
		free (temp);
		temp = next;
	}
	*head = NULL;
}

void	free_input(char **input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		free (input[i]);
		i++;
	}
	free (input);
}
