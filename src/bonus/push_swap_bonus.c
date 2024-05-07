/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 17:57:36 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/05/07 17:22:04 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_ops	*create_ops_node(char	*data);
void	add_to_ops_list(t_ops **operations, t_ops *new);
t_ops	*find_last_ops_node(t_ops *head);
void	print_ops_list_all(t_ops *head);

void	print_list_all(t_node *head)
{
	t_node	*current_node;

	current_node = head;
	while (current_node != NULL)
	{
		ft_printf("Index: [%i]\n", current_node->index);
		ft_printf("Data: [%d]\n", current_node->data);
		ft_printf("Next: [%d]\n", current_node->next);
		current_node = current_node->next;
	}
	ft_printf("\n");
}

void	check_operations(t_ops *operations, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(operations->data, "pb") == 0)
		ft_pb(stack_a, stack_b);
	else if (ft_strcmp(operations->data, "pa") == 0)
		ft_pa(stack_a, stack_b);
	else if (ft_strcmp(operations->data, "ra") == 0)
		ft_ra(stack_a);
	else if (ft_strcmp(operations->data, "rb") == 0)
		ft_rb(stack_b);
	else if (ft_strcmp(operations->data, "rr") == 0)
		ft_rr(stack_a, stack_b);
	else if (ft_strcmp(operations->data, "sa") == 0)
		ft_sa(stack_a);
	else if (ft_strcmp(operations->data, "sb") == 0)
		ft_sb(stack_b);
	else if (ft_strcmp(operations->data, "ss") == 0)
		ft_ss(stack_a, stack_b);
	else if (ft_strcmp(operations->data, "rra") == 0)
		ft_rra(stack_a);
	else if (ft_strcmp(operations->data, "rrb") == 0)
		ft_rrb(stack_b);
	else if (ft_strcmp(operations->data, "rrr") == 0)
		ft_rrr(stack_a, stack_b);
}

t_ops	*create_ops_node(char *data)
{
	t_ops	*new_node;

	new_node = malloc(sizeof(t_ops));
	if (!new_node)
		error_message("Allocation failed!");
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}
void	add_to_ops_list(t_ops **operations, t_ops *new)
{
	t_ops	*last;

	if (*operations == NULL)
		*operations = new;
	else
	{
		last = find_last_ops_node(*operations);
		last->next = new;
	}
}

t_ops	*find_last_ops_node(t_ops *head)
{
	t_ops	*current_node;

	current_node = head;
	if (current_node == NULL)
		return (NULL);
	while (current_node->next != NULL)
		current_node = current_node->next;
	return (current_node);
}

void	print_ops_list_all(t_ops *head)
{
	t_ops	*current_node;

	current_node = head;
	while (current_node != NULL)
	{
		ft_printf("Data: [%s]\n", current_node->data);
		ft_printf("Next: [%d]\n", current_node->next);
		current_node = current_node->next;
	}
	ft_printf("\n");
}

t_ops	*get_input(int fd)
{
	t_ops	*head;
	char	*line;

	head = NULL;
	line = get_next_line(fd);
	while (line)
	{
		add_to_ops_list(&head, create_ops_node(line));
		// print_ops_list_all(head);
		free(line);
		line = get_next_line(fd);
	}
	return (free(line), head);
}

void	ft_listprint(t_node *lst)
{
	while (lst != NULL)
	{
		ft_printf("%d ", lst->data);
		lst = lst->next;
	}
	ft_printf("\n");
}

void	ps_checker(char **numbers)
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_ops	*operations;
	int		i;

	if (valid_input(numbers) == false)
		error_message("Input is not valid!");
	stack_a = make_list(numbers);
	stack_b = NULL;
	operations = get_input(STDIN_FILENO);
	print_ops_list_all(operations);
	i = 0;
	while (operations != NULL)
	{
		check_operations(operations, &stack_a, &stack_b);
		operations = operations->next;
	}
	if (!is_list_sorted(stack_a) && stack_b == NULL)
		ft_putendl_fd("KO", STDOUT_FILENO);
	else if (is_list_sorted(stack_a) && stack_b == NULL)
		ft_putendl_fd("OK", STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	char	**numbers;

	if (argc < 2 || argv[1][0] == '\0')
		return (0);
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		ft_putarr_fd(numbers, STDOUT_FILENO);
		if (!numbers)
			error_message("Something went wrong!");
		ps_checker(numbers);
	}
	else
	{
		numbers = &argv[1];
		ps_checker(numbers);
	}
	free_input(numbers);
	return (0);
}
