/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_root_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:11:06 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:11:28 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_quicksort_root_b(t_node *root, int len, int count_r)
{
	int	pivot;
	int	numbers;

	if (ft_check_sorted(root->b, len, 1) == 1)
		while (len--)
			ft_push_a(root, 0);
	if (len <= 3)
	{
		ft_sort_three_b(root, len);
		return (1);
	}
	numbers = len;
	if (!ft_mediane_of_numbers(&pivot, root->b, len))
		return (0);
	while (len != numbers / 2)
	{
		if (root->b[0] >= pivot && len--)
			ft_push_a(root, 0);
		else if (++count_r)
			ft_rotate_b(root, 0);
	}
	while (numbers / 2 != root->size_b && count_r--)
		ft_reverse_rotate_b(root, 0);
	return (ft_quicksort_root_a(root, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_root_b(root, numbers / 2, 0));
}
