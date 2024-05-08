/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:56:40 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:18:22 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_rra(t_node **stack_a, int fd)
{
	ft_reverse_rotate(stack_a);
	ft_putstr_fd("rra\n", fd);
}

void	ft_rrb(t_node **stack_b, int fd)
{
	ft_reverse_rotate(stack_b);
	ft_putstr_fd("rrb\n", fd);
}

void	ft_rrr(t_node **stack_a, t_node **stack_b, int fd)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	ft_putstr_fd("rrr\n", fd);
}
