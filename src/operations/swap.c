/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:57:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/20 15:57:30 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node **head)
{
	t_node	*first;
	t_node	*second;

	first = *head;
	second = first->next;
	if (head == NULL || first->next == NULL)
		return ;
	first->next = second->next;
	second->next = first;
	*head = second;
}

void	ft_sa(t_node **stack_a)
{
	ft_swap(stack_a);
	ft_printf("sa\n");
}

void	ft_sb(t_node **stack_b)
{
	ft_swap(stack_b);
	ft_printf("sb\n");
}

void	ft_ss(t_node **stack_a, t_node **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("ss\n");
}
