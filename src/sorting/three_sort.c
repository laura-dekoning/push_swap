/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   three_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:34:22 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/18 17:37:20 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_node **stack_a)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*stack_a)->index;
	n2 = (*stack_a)->next->index;
	n3 = (*stack_a)->next->next->index;
	if (n1 < n2 && n2 > n3 && n3 > n1)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (n1 > n2 && n2 < n3 && n3 > n1)
		ft_sa(stack_a);
	else if (n1 < n2 && n2 > n3 && n3 < n1)
		ft_rra(stack_a);
	else if (n1 > n2 && n2 < n3 && n3 < n1)
		ft_ra(stack_a);
	else if (n1 > n2 && n2 > n3 && n3 < n1)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
}
