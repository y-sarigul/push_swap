/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 00:01:53 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:36:55 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_s(t_node *root, int bonus)
{
	int	tmp;

	if (root->size_a == 0 || root->size_a == 1
		|| (root->size_b == 0 || root->size_b == 1))
		return ;
	tmp = 0;
	tmp = root->a[0];
	root->a[0] = root->a[1];
	root->a[1] = tmp;
	tmp = root->b[0];
	root->b[0] = root->b[1];
	root->b[1] = tmp;
	if (!bonus)
		ft_printf("ss\n");
}
