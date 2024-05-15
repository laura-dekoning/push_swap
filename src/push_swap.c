/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 19:30:18 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/15 18:01:45 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char **input)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (valid_input(input) == false)
		error_message();
	stack_a = make_list(input);
	stack_b = NULL;
	if (is_list_sorted(stack_a))
		return (free_list(&stack_a), 0);
	pre_sort(&stack_a);
	select_sort(&stack_a, &stack_b);
	return (free_list(&stack_a), 0);
}

int	main(int argc, char **argv)
{
	char	**input;

	if (argc < 2 || argv[1][0] == '\0')
		return (0);
	else if (argc == 2)
	{
		input = ft_split(argv[1], ' ');
		if (!input)
			error_message();
		push_swap(input);
		free_input(input);
	}
	else
	{
		input = &argv[1];
		push_swap(input);
	}
	return (0);
}
