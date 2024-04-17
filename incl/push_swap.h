/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/17 19:25:22 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/04/17 19:42:12 by lade-kon      ########   odam.nl         */
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


/*List*/


/*Operations*/


/*Sorting*/


# endif