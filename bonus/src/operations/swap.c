/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:57:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:18:38 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_node **stack_a, int fd)
{
	ft_swap(stack_a);
	ft_putstr_fd("sa\n", fd);
}

void	ft_sb(t_node **stack_b, int fd)
{
	ft_swap(stack_b);
	ft_putstr_fd("sb\n", fd);
}

void	ft_ss(t_node **stack_a, t_node **stack_b, int fd)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_putstr_fd("ss\n", fd);
}
