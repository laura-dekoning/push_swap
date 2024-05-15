/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 19:41:06 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/15 18:05:46 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(void)
{
	ft_putstr_fd(B_R"Error\n"DEF, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
