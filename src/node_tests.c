/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   node_tests.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:41:19 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/07 14:20:33 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_index_node(t_node *node)
{
	ft_printf("INDEX: %i\n", node->index);
}

void	print_data_node(t_node *node)
{
	ft_printf("DATA: %i\n", node->data);
}
