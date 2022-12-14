/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:16:43 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 00:39:17 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_argv(char **argv)
{
	t_node	root;
	int		size;
	int		i;

	i = -1;
	size = ft_push_swap_strlen(argv);
	root.a = malloc(sizeof(int) * size);
	if (!root.a)
		return ;
	root.size_a = size;
	root.b = malloc(sizeof(int) * size);
	if (!root.b)
	{
		free(root.a);
		return ;
	}
	root.size_b = 0;
	while (++i < size)
		root.a[i] = ft_push_swap_atoi(argv[i], root.a);
	ft_check_doubles(root.a, size);
	ft_sort(&root, size);
	free(root.a);
	free(root.b);
}
