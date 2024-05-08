/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:03:50 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 21:39:22 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "libft.h"
# include "colors.h"

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}					t_node;

typedef struct s_check
{
	int				data;
	struct s_check	*next;
}					t_check;

/*Input checks*/
bool	valid_input(char **argv);
bool	no_duplicates(char **argv);

/*Checker functions >>> Maybe divide better*/
void	get_input(int fd, t_node **stack_a, t_node **stack_b);
void	ps_checker(char **numbers);
int		do_operations(char *operation, t_node **stack_a, t_node **stack_b);
void	print_list_all(t_node *head);

/*Checker operations*/
void	ft_push(t_node **head_dest, t_node **head_src);
void	ft_swap(t_node **head);
void	ft_rotate(t_node **head);
void	ft_reverse_rotate(t_node **head);
void	ft_ss_rr_rrr(t_node **stack_a, t_node **stack_b, int i);

/*push_swap operations to .txt*/
void	ft_pa(t_node **stack_a, t_node **stack_b, int fd);
void	ft_pb(t_node **stack_a, t_node **stack_b, int fd);
void	ft_sa(t_node **stack_a, int fd);
void	ft_sb(t_node **stack_b, int fd);
void	ft_ss(t_node **stack_a, t_node **stack_b, int fd);
void	ft_ra(t_node **stack_a, int fd);
void	ft_rb(t_node **stack_b, int fd);
void	ft_rr(t_node **stack_a, t_node **stack_b, int fd);
void	ft_rra(t_node **stack_a, int fd);
void	ft_rrb(t_node **stack_b, int fd);
void	ft_rrr(t_node **stack_a, t_node **stack_b, int fd);

/*Sorting*/
void	pre_sort(t_node	**head);
void	select_sort(t_node **stack_a, t_node **stack_b, int fd);
void	two_sort(t_node **stack_a, int fd);
void	three_sort(t_node **stack_a, int fd);
void	four_sort(t_node **stack_a, t_node **stack_b, int nodes, int fd);
void	five_sort(t_node **stack_a, t_node **stack_b, int nodes, int fd);
void	radix_sort(t_node **stack_a, t_node **stack_b, int fd);

#endif