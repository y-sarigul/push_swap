/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:18:15 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 10:09:55 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sorted(int *root, int size, int order)
{
	int	i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (root[i - 1] > root[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (root[i - 1] < root[i])
				return (0);
			i++;
		}
		return (1);
	}
}
