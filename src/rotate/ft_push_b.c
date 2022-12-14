/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:51:05 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/14 23:53:55 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_node *root, int bonus)
{
	int	i;

	if (root->size_a)
	{
		root->size_b++;
		i = root->size_b;
		while (--i > 0)
			root->b[i] = root->b[i - 1];
		root->b[0] = root->a[0];
		i = -1;
		root->size_a--;
		while (++i < root->size_a)
			root->a[i] = root->a[i + 1];
		if (!bonus)
			ft_printf("pb\n");
	}
	else
		return ;
}
