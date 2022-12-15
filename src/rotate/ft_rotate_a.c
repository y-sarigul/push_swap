/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:54:06 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:34:09 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_node *root, int bonus)
{
	int	tmp;
	int	i;

	if (root->size_a == 0 || root->size_a == 1)
		return ;
	i = 0;
	tmp = root->a[i];
	i++;
	while (i < root->size_a)
	{
		root->a[i - 1] = root->a[i];
		i++;
	}
	root->a[i - 1] = tmp;
	if (!bonus)
		ft_printf("ra\n");
}
