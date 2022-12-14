/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:55:34 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 00:00:47 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_r(t_node *root, int bonus)
{
	int	tmp;
	int	i;

	if (root->size_a == 0 || root->size_a == 1
		|| (root->size_b == 0 || root->size_b == 1))
		return ;
	i = 0;
	tmp = root->a[i];
	while (++i < root->size_a)
		root->a[i - 1] = root->a[i];
	root->a[i - 1] = tmp;
	i = 0;
	tmp = root->b[i];
	while (++i < root->size_b)
		root->b[i - 1] = root->b[i];
	root->b[i - 1] = tmp;
	if (!bonus)
		ft_printf("rr\n");
}
