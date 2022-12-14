/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:54:53 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 00:41:12 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_b(t_node *root, int bonus)
{
	int	tmp;
	int	i;

	if (root->size_b == 0 || root->size_b == 1)
		return ;
	i = 0;
	tmp = root->b[i];
	i++;
	while (i < root->size_b)
	{
		root->b[i - 1] = root->b[i];
		i++;
	}
	root->b[i - 1] = tmp;
	if (!bonus)
		ft_printf("rb\n");
}
