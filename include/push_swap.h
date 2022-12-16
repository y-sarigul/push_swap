/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 00:20:44 by msarigul          #+#    #+#             */
/*   Updated: 2022/12/16 20:22:31 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_node;

// == arg ==
void	ft_push_argv(char **argv);

// == rotate ==
void	ft_push_a(t_node *root, int bonus);
void	ft_push_b(t_node *root, int bonus);
void	ft_reverse_rotate_a(t_node *root, int bonus);
void	ft_reverse_rotate_b(t_node *root, int bonus);
void	ft_reverse_rotate_r(t_node *root, int bonus);
void	ft_rotate_a(t_node *root, int bonus);
void	ft_rotate_b(t_node *root, int bonus);
void	ft_rotate_r(t_node *root, int bonus);
void	ft_swap_a(t_node *root, int bonus);
void	ft_swap_b(t_node *root, int bonus);
void	ft_swap_s(t_node *root, int bonus);

// == sort ==
void	ft_temporary_sort(int *root_temp, int size);
void	ft_three_number_case_root_a(t_node *three);
int		ft_push(t_node *root, int len, int push);
int		ft_sort(t_node *root, int size);

// == quick_sort ==
void	ft_quicksort_three_root_a_and_b(t_node *root, int len);
int		ft_mediane_of_numbers(int *pivot, int *root, int size);
int		ft_quicksort_root_a(t_node *root, int len, int count_r);
int		ft_quicksort_root_b(t_node *root, int len, int count_r);
int		ft_sort_three_b(t_node *root, int len);

// == utils ==
void	ft_check_doubles(int *root, int size);
void	ft_error(int *root);

int		ft_check_sorted(int *root, int size, int j);
int		ft_push_swap_atoi(char *str, int *root);
int		ft_push_swap_strlen(char **argv);
#endif
