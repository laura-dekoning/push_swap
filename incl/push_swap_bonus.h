/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:03:50 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/07 19:08:15 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "push_swap.h"

typedef struct s_check
{
	int				data;
	struct s_check	*next;
}					t_check;

void	get_input(int fd, t_node **stack_a, t_node **stack_b);
void	ps_checker(char **numbers);
int		do_operations(char *operation, t_node **stack_a, t_node **stack_b);
void	print_list_all(t_node *head);

#endif