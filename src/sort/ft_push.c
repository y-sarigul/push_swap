/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:06:05 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 09:21:47 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_node *root, int len, int push)
{
	if (push == 0)
		ft_push_b(root, 0);
	else
		ft_push_a(root, 0);
	len--;
	return (len);
}
