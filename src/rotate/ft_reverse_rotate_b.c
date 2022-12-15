/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:58:45 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 10:06:39 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_b(t_node *root, int bonus)
{
	int	tmp;
	int	i;

	if (root->size_b == 0 || root->size_b == 1)
		return ;
	i = root->size_b - 1;
	tmp = root->b[i];
	while (i)
	{
		root->b[i] = root->b[i - 1];
		i--;
	}
	root->b[i] = tmp;
	if (!bonus)
		ft_printf("rrb\n");
}
