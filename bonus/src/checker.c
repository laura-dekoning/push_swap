/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 17:57:36 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/10 16:49:19 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	do_operations(char *operation, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(operation, "pb\n") == 0)
		ft_do_push(stack_b, stack_a);
	else if (ft_strcmp(operation, "pa\n") == 0)
		ft_do_push(stack_a, stack_b);
	else if (ft_strcmp(operation, "sa\n") == 0)
		ft_do_swap(stack_a);
	else if (ft_strcmp(operation, "sb\n") == 0)
		ft_do_swap(stack_b);
	else if (ft_strcmp(operation, "ss\n") == 0)
		ft_do_ss_rr_rrr(stack_a, stack_b, 0);
	else if (ft_strcmp(operation, "ra\n") == 0)
		ft_do_rotate(stack_a);
	else if (ft_strcmp(operation, "rb\n") == 0)
		ft_do_rotate(stack_b);
	else if (ft_strcmp(operation, "rr\n") == 0)
		ft_do_ss_rr_rrr(stack_a, stack_b, 1);
	else if (ft_strcmp(operation, "rra\n") == 0)
		ft_do_reverse_rotate(stack_a);
	else if (ft_strcmp(operation, "rrb\n") == 0)
		ft_do_reverse_rotate(stack_b);
	else if (ft_strcmp(operation, "rrr\n") == 0)
		ft_do_ss_rr_rrr(stack_a, stack_b, 2);
	else
		return (1);
	return (0);
}

// void	get_input(int fd, t_node **stack_a, t_node **stack_b)
// {
// 	char	*line;

// 	line = get_next_line(fd);
// 	while (line)
// 	{
// 		if (do_operations(line, stack_a, stack_b) != 0)
// 			error_message();
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	free(line);
// }

void	get_input(int fd, t_node **stack_a, t_node **stack_b)
{
	char	*line;

	line = get_next_line(fd);
	while (1)
	{
		if (!line)
			break ;
		if (do_operations(line, stack_a, stack_b) != 0)
			error_message();
		free(line);
		line = get_next_line(fd);
	}
}

void	ps_checker(char **numbers)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (valid_input(numbers) == false)
		error_message();
	stack_a = make_list(numbers);
	stack_b = NULL;
	get_input(STDIN_FILENO, &stack_a, &stack_b);
	if (is_list_sorted(stack_a) && stack_b == NULL)
		ft_putstrendl_fd("OK", STDOUT_FILENO);
	else
		ft_putendl_fd("KO", STDOUT_FILENO);
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
			error_message();
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
