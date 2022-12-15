/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_temporary_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:02:36 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:16:22 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_temporary_sort(int *root_temporaire, int size)
{
	int	i;
	int	j;
	int	temporaire;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (root_temporaire[i] > root_temporaire[j])
			{
				temporaire = root_temporaire[i];
				root_temporaire[i] = root_temporaire[j];
				root_temporaire[j] = temporaire;
			}
			j++;
		}
		i++;
	}
}
