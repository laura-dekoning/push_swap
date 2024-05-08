/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:56:19 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:18:12 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_pa(t_node **stack_a, t_node **stack_b, int fd)
{
	ft_push(stack_a, stack_b);
	ft_putstr_fd("pa\n", fd);
}

void	ft_pb(t_node **stack_a, t_node **stack_b, int fd)
{
	ft_push(stack_b, stack_a);
	ft_putstr_fd("pb\n", fd);
}
