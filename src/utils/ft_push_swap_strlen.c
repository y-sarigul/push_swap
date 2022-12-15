/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_strlen.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:43:10 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 10:10:34 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_swap_strlen(char **av)
{
	int	i;

	i = 0;
	while (*av)
	{
		av++;
		i++;
	}
	return (i);
}

