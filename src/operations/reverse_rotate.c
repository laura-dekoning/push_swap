/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:56:40 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/20 15:56:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_node **head)
{
	t_node	*last;
	t_node	*before_last;

	if (head == NULL || (*head)->next == NULL)
		return ;
	last = find_last_node(*head);
	before_last = before_last_node(head, last);
	last->next = *head;
	*head = last;
	before_last->next = NULL;
}

void	ft_rra(t_node **stack_a)
{
	ft_reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	ft_rrb(t_node **stack_b)
{
	ft_reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_node **stack_a, t_node **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
