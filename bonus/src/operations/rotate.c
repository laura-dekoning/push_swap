/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:57:05 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:18:31 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_ra(t_node **stack_a, int fd)
{
	ft_rotate(stack_a);
	ft_putstr_fd("ra\n", fd);
}

void	ft_rb(t_node **stack_b, int fd)
{
	ft_rotate(stack_b);
	ft_putstr_fd("rb\n", fd);
}

void	ft_rr(t_node **stack_a, t_node **stack_b, int fd)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_putstr_fd("rr\n", fd);
}
