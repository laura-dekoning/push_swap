/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 17:57:36 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/07 19:34:26 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	do_operations(char *operation, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(operation, "pb\n") == EXIT_SUCCESS)
		ft_push(stack_b, stack_a);
	else if (ft_strcmp(operation, "pa\n") == EXIT_SUCCESS)
		ft_push(stack_a, stack_b);
	else if (ft_strcmp(operation, "ra\n") == EXIT_SUCCESS)
		ft_rotate(stack_a);
	else if (ft_strcmp(operation, "rb\n") == EXIT_SUCCESS)
		ft_rotate(stack_b);
	else if (ft_strcmp(operation, "rr\n") == EXIT_SUCCESS)
		ft_rr(stack_a, stack_b);
	else if (ft_strcmp(operation, "sa\n") == EXIT_SUCCESS)
		ft_swap(stack_a);
	else if (ft_strcmp(operation, "sb\n") == EXIT_SUCCESS)
		ft_swap(stack_b);
	else if (ft_strcmp(operation, "ss\n") == EXIT_SUCCESS)
		ft_ss(stack_a, stack_b);
	else if (ft_strcmp(operation, "rra\n") == EXIT_SUCCESS)
		ft_reverse_rotate(stack_a);
	else if (ft_strcmp(operation, "rrb\n") == EXIT_SUCCESS)
		ft_reverse_rotate(stack_b);
	else if (ft_strcmp(operation, "rrr\n") == EXIT_SUCCESS)
		ft_rrr(stack_a, stack_b);
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

void	get_input(int fd, t_node **stack_a, t_node **stack_b)
{
	char	*line;

	line = get_next_line(fd);
	while (line)
	{
		if (do_operations(line, stack_a, stack_b) != EXIT_SUCCESS)
			error_message("Error");
		free(line);
		line = get_next_line(fd);
	}
	free(line);
}

void	ps_checker(char **numbers)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (valid_input(numbers) == false)
		error_message("Error");
	stack_a = make_list(numbers);
	stack_b = NULL;
	get_input(STDIN_FILENO, &stack_a, &stack_b);
	if (!is_list_sorted(stack_a) && stack_b == NULL)
		ft_putendl_fd("KO", STDOUT_FILENO);
	else if (is_list_sorted(stack_a) && stack_b == NULL)
		ft_putendl_fd("OK", STDOUT_FILENO);
	free_list(&stack_a);
}

int	main(int argc, char **argv)
{
	char	**numbers;

	if (argc < 2 || argv[1][0] == '\0')
		return (0);
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		if (!numbers)
			error_message("Error");
		ps_checker(numbers);
		free_input(numbers);
	}
	else
	{
		numbers = &argv[1];
		ps_checker(numbers);
	}
	return (0);
}
