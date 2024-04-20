/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:57:05 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/20 15:57:16 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_node **head)
{
	t_node	*last;

	if (head == NULL || (*head)->next == NULL)
		return ;
	last = find_last_node(*head);
	last->next = *head;
	*head = (*head)->next;
	last->next->next = NULL;
}

void	ft_ra(t_node **stack_a)
{
	ft_rotate(stack_a);
	ft_printf("ra\n");
}

void	ft_rb(t_node **stack_b)
{
	ft_rotate(stack_b);
	ft_printf("rb\n");
}

void	ft_rr(t_node **stack_a, t_node **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_printf("rr\n");
}
