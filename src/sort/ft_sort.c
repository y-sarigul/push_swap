/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:35:21 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 00:40:02 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(t_node *root, int size)
{
	if (ft_check_sorted(root -> a, root -> size_a, 0) == 0)
	{
		if (size == 2)
			ft_swap_a(root, 0);
		else if (size == 3)
			ft_three_number_case_root_a(root);
		else
			ft_quicksort_root_a(root, size, 0);
	}
	return (0);
}
