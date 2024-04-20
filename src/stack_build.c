/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_build.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 12:33:56 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/20 17:15:24 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int data)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		error_message("Allocation failed!");
	new_node->data = data;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

void	add_to_stack(t_node **stack_a, t_node *new)
{
	t_node	*last;

	if (*stack_a == NULL)
		*stack_a = new;
	else
	{
		last = find_last_node(*stack_a);
		last->next = new;
	}
}

t_node	*before_last_node(t_node **head, t_node *last)
{
	t_node	*current_node;

	current_node = *head;
	while (current_node->next != last)
		current_node = current_node->next;
	return (current_node);
}

t_node	*find_last_node(t_node *stack_a)
{
	t_node	*current_node;

	current_node = stack_a;
	if (current_node == NULL)
		return (NULL);
	while (current_node->next != NULL)
		current_node = current_node->next;
	return (current_node);
}

t_node	*make_list(char **input)
{
	t_node	*head;
	int		data;
	int		i;

	head = NULL;
	i = 0;
	while (input[i])
	{
		data = ft_atoi(input[i]);
		add_to_stack(&head, create_node(data));
		i++;
	}
	return (head);
}
