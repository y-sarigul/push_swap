/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:59:28 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:36:13 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_node *root, int bonus)
{
	int	tmp;
	int	i;

	if (root->size_a == 0 || root->size_a == 1)
		return ;
	i = root->size_a - 1;
	tmp = root->a[i];
	while (i)
	{
		root->a[i] = root->a[i - 1];
		i--;
	}
	root->a[i] = tmp;
	if (!bonus)
		ft_printf("rra\n");
}

