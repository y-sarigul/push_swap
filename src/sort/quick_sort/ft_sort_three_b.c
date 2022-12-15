/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:26:03 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:13:26 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_three_b(t_node *root, int len)
{
	if (len == 1)
		ft_push_a(root, 0);
	else if (len == 2)
	{
		if (root->b[0] < root->b[1])
			ft_swap_b(root, 0);
		while (len--)
			ft_push_a(root, 0);
	}
	else if (len == 3)
	{
		while (len || !(root->a[0] < root->a[1] && root->a[1] < root->a[2]))
		{
			if (len == 1 && root->a[0] > root->a[1])
				ft_swap_a(root, 0);
			else if (len == 1 || (len >= 2 && root->b[0] > root->b[1])
				|| (len == 3 && root->b[0] > root->b[2]))
				len = ft_push(root, len, 1);
			else
				ft_swap_b(root, 0);
		}
	}
	return (0);
}
