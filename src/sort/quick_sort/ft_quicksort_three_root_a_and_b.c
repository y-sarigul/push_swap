/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_three_root_a_and_b.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:42:39 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:12:47 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_quicksort_three_root_a_and_b(t_node *root, int len)
{
	if (len == 3 && root->size_a == 3)
		ft_three_number_case_root_a(root);
	else if (len == 2)
	{
		if (root->a[0] > root->a[1])
			ft_swap_a(root, 0);
	}
	else if (len == 3)
	{
		while (len != 3 || !(root->a[0] < root->a[1]
				&& root->a[1] < root->a[2]))
		{
			if (len == 3 && root->a[0] > root->a[1] && root->a[2])
				ft_swap_a(root, 0);
			else if (len == 3 && !(root->a[2] > root->a[0]
					&& root->a[2] > root->a[1]))
				len = ft_push(root, len, 0);
			else if (root->a[0] > root->a[1])
				ft_swap_a(root, 0);
			else if (len++)
				ft_push_a(root, 0);
		}
	}
}
