/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:03:50 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/07 16:09:22 by lade-kon      ########   odam.nl         */
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

typedef struct s_ops
{
	char			*data;
	struct s_ops	*next;
}					t_ops;

t_ops	*get_input(int fd);
void	ps_checker(char **numbers);
void	check_operations(t_ops *operation, t_node **stack_a, t_node **stack_b);
void	print_list_all(t_node *head);

#endif