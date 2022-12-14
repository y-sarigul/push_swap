/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mediane_of_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:22:44 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 01:59:45 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_mediane_of_numbers(int *pivot, int *root, int size)
{
	int	*tmp_root;
	int	i;

	tmp_root = (int *)malloc(sizeof(int) * size);
	if (!tmp_root)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp_root[i] = root[i];
		i++;
	}
	ft_temporary_sort(tmp_root, size);
	*pivot = tmp_root[size / 2];
	free(tmp_root);
	return (1);
}
