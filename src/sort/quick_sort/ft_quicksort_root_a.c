/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort_root_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:17:48 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:10:57 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_quicksort_root_a(t_node *root, int len, int count_r)
{
	int	pivot;
	int	numbers;

	if (ft_check_sorted(root->a, len, 0) == 1)
		return (1);
	numbers = len;
	if (len <= 3)
	{
		ft_quicksort_three_root_a_and_b(root, len);
		return (1);
	}
	if (!ft_mediane_of_numbers(&pivot, root->a, len))
		return (0);
	while (len != numbers / 2 + numbers % 2)
	{
		if (root->a[0] < pivot && (len--))
			ft_push_b(root, 0);
		else if (++count_r)
			ft_rotate_a(root, 0);
	}
	while (numbers / 2 + numbers % 2 != root->size_a && count_r--)
		ft_reverse_rotate_a(root, 0);
	return (ft_quicksort_root_a(root, numbers / 2 + numbers % 2, 0)
		&& ft_quicksort_root_b(root, numbers / 2, 0));
	return (1);
}
