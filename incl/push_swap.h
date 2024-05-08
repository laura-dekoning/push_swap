/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 19:25:22 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/08 20:59:40 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "colors.h"

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}					t_node;

/*Input checks*/
bool	valid_input(char **argv);
bool	no_duplicates(char **argv);

/*Error*/
void	error_message(void);

/*Free*/
void	free_list(t_node **head);
void	free_input(char **input);

/*List*/
t_node	*create_node(int data);
void	add_to_stack(t_node **stack_a, t_node *new);
t_node	*before_last_node(t_node **head, t_node *last);
t_node	*find_last_node(t_node *stack_a);
t_node	*make_list(char **input);

/*Operations*/
void	ft_swap(t_node **head);
void	ft_sa(t_node **stack_a);
void	ft_sb(t_node **stack_b);
void	ft_ss(t_node **stack_a, t_node **stack_b);

void	ft_push(t_node **head_dest, t_node **head_src);
void	ft_pa(t_node **stack_a, t_node **stack_b);
void	ft_pb(t_node **stack_a, t_node **stack_b);

void	ft_rotate(t_node **head);
void	ft_ra(t_node **stack_a);
void	ft_rb(t_node **stack_b);
void	ft_rr(t_node **stack_a, t_node **stack_b);

void	ft_reverse_rotate(t_node **head);
void	ft_rra(t_node **stack_a);
void	ft_rrb(t_node **stack_b);
void	ft_rrr(t_node **stack_a, t_node **stack_b);

/*Sorting*/
void	pre_sort(t_node	**head);
void	select_sort(t_node **stack_a, t_node **stack_b);
void	two_sort(t_node **stack_a);
void	three_sort(t_node **stack_a);
void	four_sort(t_node **stack_a, t_node **stack_b, int nodes);
void	five_sort(t_node **stack_a, t_node **stack_b, int nodes);
void	radix_sort(t_node **stack_a, t_node **stack_b);

/*Utils*/
int		count_nodes(t_node **head);
int		is_list_sorted(t_node *head);
t_node	*is_lowest_index(t_node **stack_a);

/*List test functions*/
void	print_data_node(t_node *node);
void	print_index_node(t_node *node);
void	print_data_list(t_node *head);
void	print_index_list(t_node *head);
void	print_next_list(t_node *head);
void	print_list_all(t_node *head);
void	print_arguments(char **string);

#endif