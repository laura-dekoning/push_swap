/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   two_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:34:43 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:35:24 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	two_sort(t_node **stack_a, int fd)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		ft_sa(stack_a, fd);
}
