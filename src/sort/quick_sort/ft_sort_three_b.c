/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:26:03 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 01:59:01 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_while(t_node *root, int len)
{
	if (len != 0)
		if (!(root -> a[0] < root -> a[1]))
			if (root -> a[1] < root -> a[2])
				return (1);
	return (0);
}

int	ft_check_elseif(t_node *root, int len)
{
	if (len == 1)
		return (1);
	else if (len >= 2 && root -> b[0] > root -> b[1])
		return (1);
	else if (len == 3 && root -> b[0] > root -> b[2])
		return (1);
	return (0);
}

int	ft_sort_three_b(t_node *root, int len)
{
	if (len == 1)
		ft_push_a(root, 0);
	else if (len == 2)
	{
		if (root -> b[0] < root -> b[1])
			ft_swap_b(root, 0);
		while (len--)
			ft_push_a(root, 0);
	}
	else if (len == 3)
	{
		while (ft_check_while(root, len))
		{
			if (len == 1 && root -> a[0] > root -> a[1])
				ft_swap_a(root, 0);
			else if (ft_check_elseif(root, len))
				len = ft_push(root, len, 1);
			else
				ft_swap_b(root, 0);
		}
	}
	return (0);
}
