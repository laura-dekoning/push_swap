/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 15:40:38 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/24 16:07:35 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	push_swap_checker(char **input)
{
	if (valid_input(input) == false)
		error_message("Input is not valid!");

}

int	main(int argc, char **argv)
{
	char	**numbers;
	char	*input;
	char	**operations;

	if (argc < 2 || argv[1][0] == '\0')
		return (0);
	
	input = get_next_line(0);
	operations = ft_split(input, '\n');
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		if (!numbers)
			error_message("Something went wrong while splitting!");
//voer alle operations uit met een checker functie oid.
		free_input(numbers);
	}
	else
	{
		numbers = &argv[1];
//voer alle operations uit met een checker functie oid.
	}

	return (0);
}
