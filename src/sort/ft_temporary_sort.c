/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_temporary_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:02:36 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/14 23:05:34 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_temporary_sort(int *root_temp, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (root_temp[i] > root_temp[j])
			{
				temp = root_temp[i];
				root_temp[i] = root_temp[j];
				root_temp[j] = temp;
			}
			j++;
		}
		i++;
	}
}
