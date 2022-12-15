/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mediane_of_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:22:44 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:10:16 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_mediane_of_numbers(int *pivot, int *root, int size)
{
	int		*temporaire_root;
	int		i;

	temporaire_root = (int *)malloc(size * sizeof(int));
	if (!temporaire_root)
		return (0);
	i = 0;
	while (i < size)
	{
		temporaire_root[i] = root[i];
		i++;
	}
	ft_temporary_sort(temporaire_root, size);
	*pivot = temporaire_root[size / 2];
	free(temporaire_root);
	return (1);
}
