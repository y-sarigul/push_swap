/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_number_case_root_a.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:38:39 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/14 22:43:36 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three_number_case_root_a(t_node *three)
{
	if (three -> a[0] > three -> a[1] && three -> a[0] < three -> a[2]
		&& three -> a[1] < three -> a[2])
		ft_swap_a(three, 0);
	if (three -> a[0] > three -> a[1] && three -> a[0] > three -> a[2]
		&& three -> a[1] > three -> a[2])
	{
		ft_swap_a(three, 0);
		ft_reverse_rotate_a(three, 0);
	}
	if (three -> a[0] > three -> a[1] && three -> a[0] > three -> a[2]
		&& three-> a[1] < three-> a [2])
		ft_rotate_a(three, 0);
	if (three -> a[0] < three -> a[1] && three -> a[0] < three -> a[2]
		&& three -> a[1] > three -> a[2])
	{
		ft_swap_a(three, 0);
		ft_rotate_a(three, 0);
	}
	if (three -> a[0] < three -> a[1] && three -> a[0] > three -> a[2]
		&& three -> a[1] > three -> a[2])
		ft_reverse_rotate_a(three, 0);
}
