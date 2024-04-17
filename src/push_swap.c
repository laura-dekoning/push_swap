/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 19:30:18 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/17 19:42:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"




int	main(int argc, char **argv)
{
	char **input;

	if (argc < 2 || argv[1][0] == '\0')
		return (0);
	else if (argc == 2)
	{
		input = ft_split(argv[1], ' ');
		if (!input)
			error_message("Something went wrong!");
		
	}
}
