/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 16:03:50 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/24 17:45:12 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "push_swap.h"

typedef	struct 		s_check
{
	int				data;
	struct s_check	*next;
}					t_check;

char	*get_input(int fd);




#endif