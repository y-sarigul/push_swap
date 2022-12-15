/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:49:59 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:31:37 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_node *root, int bonus)
{
	int	i;

	if (root->size_b)
	{
		root->size_a++;
		i = root->size_a;
		while (--i > 0)
			root->a[i] = root->a[i - 1];
		root->a[0] = root->b[0];
		i = -1;
		root->size_b--;
		while (++i < root->size_b)
			root->b[i] = root->b[i + 1];
		if (!bonus)
			ft_printf("pa\n");
	}
	else
		return ;
}
