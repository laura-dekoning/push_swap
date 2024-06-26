/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:03:50 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/10 16:34:54 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "libft.h"
# include "colors.h"
# include "push_swap.h"

typedef struct s_ops
{
	char			*op;
	struct s_ops	*next;
}					t_ops;

/*Checker functions >>> Maybe divide better*/
void	get_input(int fd, t_node **stack_a, t_node **stack_b);
void	ps_checker(char **numbers);
int		do_operations(char *operation, t_node **stack_a, t_node **stack_b);
void	print_list_all(t_node *head);

/*Checker operations*/
void	ft_do_push(t_node **head_dest, t_node **head_src);
void	ft_do_swap(t_node **head);
void	ft_do_rotate(t_node **head);
void	ft_do_reverse_rotate(t_node **head);
void	ft_do_ss_rr_rrr(t_node **stack_a, t_node **stack_b, int i);

#endif