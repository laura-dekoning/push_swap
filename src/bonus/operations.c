/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/07 19:35:20 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 20:57:45 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_push(t_node **head_dest, t_node **head_src)
{
	t_node	*tmp;

	if (*head_src == NULL)
		return ;
	tmp = (*head_src)->next;
	(*head_src)->next = *head_dest;
	*head_dest = *head_src;
	*head_src = tmp;
}

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

void	ft_ss_rr_rrr(t_node **stack_a, t_node **stack_b, int i)
{
	if (i == 0)
	{
		ft_swap(stack_a);
		ft_swap(stack_b);
	}
	else if (i == 1)
	{
		ft_rotate(stack_a);
		ft_rotate(stack_b);
	}
	else if (i == 2)
	{
		ft_reverse_rotate(stack_a);
		ft_reverse_rotate(stack_b);
	}
}