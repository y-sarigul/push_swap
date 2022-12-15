/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_atoi.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:26:35 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/15 10:11:50 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_swap_atoi(char *str, int *root)
{
	unsigned int		i;
	int					sign;
	unsigned long int	number;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error(root);
		number = (str[i] - '0') + (number * 10);
		i++;
	}
	if ((number > 2147483648 && sign == -1)
		|| (number > 2147483647 && sign == 1))
		ft_error(root);
	return (number * sign);
}
