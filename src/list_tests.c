/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_tests.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:41:19 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/24 16:41:28 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_data_list(t_node *head) 
{
    // t_node *head = *head;

    while (head != NULL) {
        ft_printf("%d ", head->data);
        head = head->next;
    }

    ft_printf("\n");
}

void	print_index_node(t_node *node)
{
	ft_printf("INDEX: %i\n", node->index);
}

void	print_data_node(t_node *node)
{
	ft_printf("DATA: %i\n", node->data);
}

void	print_next_list(t_node *head) 
{
    // t_node *head = *head;

    while (head != NULL) {
        ft_printf("%d >> %d ", head->data, head->next);
        head = head->next;
    }

    ft_printf("\n");
}

void	print_index_list(t_node *head)
{
	t_node	*current_node;

	current_node = head;

	while (current_node != NULL)
	{
		ft_printf("%i ", current_node->index);
		current_node = current_node->next;
	}
    ft_printf("\n");
}

void print_arguments(char **string)
{
	int		i;

	i = 0;
	while (string[i] != NULL)
	{
		ft_printf("Argument: %i = %s\n", i, string[i]);
		i++;
	}

	ft_printf("\n");
}
