/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 00:03:10 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:38:36 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_b(t_node *root, int bonus)
{
	int	tmp;

	if (root->size_b == 0 || root->size_b == 1)
		return ;
	tmp = 0;
	tmp = root->b[0];
	root->b[0] = root->b[1];
	root->b[1] = tmp;
	if (!bonus)
		ft_printf("sb\n");
}
