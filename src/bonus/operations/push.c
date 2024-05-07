/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:56:19 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/20 15:56:28 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_pa(t_node **stack_a, t_node **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_printf("pa\n");
}

void	ft_pb(t_node **stack_a, t_node **stack_b)
{
	ft_push(stack_b, stack_a);
	ft_printf("pb\n");
}
