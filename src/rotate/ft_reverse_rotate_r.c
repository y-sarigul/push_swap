/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_r.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:57:41 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/14 23:58:21 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_r(t_node *root, int bonus)
{
	int	tmp;
	int	i;

	if (root->size_a == 0 || root->size_a == 1
		|| (root->size_b == 0 || root->size_b == 1))
		return ;
	i = root->size_a - 1;
	tmp = root->a[i];
	while (i)
	{
		root->a[i] = root->a[i - 1];
		i--;
	}
	root->a[i] = tmp;
	i = root->size_b - 1;
	tmp = root->b[i];
	while (i--)
		root->b[i] = root->b[i - 1];
	root->b[i] = tmp;
	if (!bonus)
		ft_printf("rrr\n");
}
