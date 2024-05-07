/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus_test.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:40:38 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/07 16:30:18 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	push_swap_checker(char **numbers, int fd)
{
	char	*input;
	char	**operations;

	if (valid_input(numbers) == false)
		error_message("Input is not valid!");
	input = get_input(fd);
	operations = ft_split(input, '\n');
	ft_printf("%s\n", operations[0]);
	return (0);
}

char	*get_input(int fd)
{
	char	*line;
	char	*input;

	while (1)
	{
		line = get_next_line(fd);
		if (line)
		{
			input = ft_gnl_strjoin(input, line);
			free(line);
		}
		else
			break ;
	}
	return (input);
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
			error_message("Something went wrong while splitting!");
		push_swap_checker(numbers, STDIN_FILENO);
		free_input(numbers);
	}
	else
	{
		numbers = &argv[1];
		push_swap_checker(numbers, STDIN_FILENO);
	}
	printf("Hoi ik ben hier en de list is gesorteerd\n");
	return (0);
}
