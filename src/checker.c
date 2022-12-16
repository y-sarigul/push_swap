/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:15:27 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/16 20:20:48 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_error(t_node *root, int choix)
{
	free(root->a);
	free(root->b);
	if (choix)
		ft_printf("Error\n");
	exit(1);
}

void	exec_instruction(t_node *root, char *instruction)
{
	if (!ft_strcmp(instruction, "sa\n"))
		ft_swap_a(root, 1);
	else if (!ft_strcmp(instruction, "sb\n"))
		ft_swap_b(root, 1);
	else if (!ft_strcmp(instruction, "ss\n"))
		ft_swap_s(root, 1);
	else if (!ft_strcmp(instruction, "ra\n"))
		ft_rotate_a(root, 1);
	else if (!ft_strcmp(instruction, "rb\n"))
		ft_rotate_b(root, 1);
	else if (!ft_strcmp(instruction, "rr\n"))
		ft_rotate_r(root, 1);
	else if (!ft_strcmp(instruction, "rra\n"))
		ft_reverse_rotate_a(root, 1);
	else if (!ft_strcmp(instruction, "rrb\n"))
		ft_reverse_rotate_b(root, 1);
	else if (!ft_strcmp(instruction, "rrr\n"))
		ft_reverse_rotate_r(root, 1);
	else if (!ft_strcmp(instruction, "pa\n"))
		ft_push_a(root, 1);
	else if (!ft_strcmp(instruction, "pb\n"))
		ft_push_b(root, 1);
	else
		free_error(root, 1);
}

void	read_from_stdin(t_roots *root)
{
	char	*instruction;

	instruction = get_next_line(0);
	while (instruction)
	{
		exec_instruction(root, instruction);
		free(instruction);
		instruction = get_next_line(0);
	}
	if (ft_check_sorted(root->a, root->size_a, 0) && root->size_b == 0)
		ft_printf("OK\n");
	else
		ft_printf("K0\n");
	free_error(root, 0);
}

int	*c_errors(char **av)
{
	int	*a;
	int	size;
	int	i;

	i = -1;
	size = ft_push_swap_strlen(av);
	a = malloc(size * sizeof(int));
	while (++i < size)
		a[i] = ft_push_swap_atoi(av[i], a);
	ft_check_doubles(a, size);
	return (a);
}

int	main(int ac, char **av)
{
	t_node	root;

	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		root.a = c_errors(av);
		root.size_a = ft_push_swap_strlen(av);
		root.b = malloc(root.size_a * sizeof(int));
		if (!root.b)
		{
			free(root.a);
			return (0);
		}
		root.size_b = 0;
		read_from_stdin(&root);
	}
	return (0);
}
