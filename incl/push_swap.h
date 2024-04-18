/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 19:25:22 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/18 17:33:47 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "colors.h"

typedef	struct 		s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}					t_node;

/*Input checks*/


/*Error*/
void	error_message(char *message);

/*Free*/
void	free_list(t_node **head);


/*List*/
t_node	*create_node(int data);
void	add_to_stack(t_node **stack_a, t_node *new);
t_node	*before_last_node(t_node **head, t_node *last);
t_node	*find_last_node(t_node *stack_a);
t_node	*make_list(char **input);


/*Operations*/


/*Sorting*/
void	pre_sort(t_node	**head);
void	select_sort(t_node **stack_a, t_node **stack_b);
void	two_sort(t_node **stack_a);
void	three_sort(t_node **stack_a);
void	four_sort(t_node **stack_a, t_node **stack_b);
void	five_sort(t_node **stack_a, t_node **stack_b);
void	radix_sort(t_node **stack_a, t_node **stack_b);


/*Utils*/
int		count_nodes(t_node **head);
bool	is_list_sorted(t_node *head);
t_node	*is_lowest_index(t_node **stack_a);


# endif