/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 00:04:02 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 00:10:49 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_node *root, int bonus)
{
	int	tmp;

	if (root->size_a == 0 || root->size_a == 1)
		return ;
	tmp = 0;
	tmp = root->a[0];
	root->a[0] = root->a[1];
	root->a[1] = tmp;
	if (!bonus)
		ft_printf("sa\n");
}
