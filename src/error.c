/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 19:41:06 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/20 16:23:46 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(char *message)
{
	ft_printf(B_R"Error!\n"DEF);
	ft_putstr_fd(message, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
