/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 04:08:27 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/22 06:38:34 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_combn_rec(int n, int dep, int pre_num, char number[])
{
	int num_index;
	int cur_num;

	num_index = 0;
	cur_num = pre_num + 1;
	if (dep == n)
	{
		while (num_index < n)
		{
			write(1, &number[num_index], 1);
			num_index++;
		}
		if (number[0] != '9' + 1 - n)
			write(1, ", ", 2);
		return ;
	}
	while (cur_num <= 9)
	{
		number[dep] = '0' + cur_num;
		ft_combn_rec(n, dep + 1, cur_num, number);
		cur_num++;
	}
}

void		ft_print_combn(int n)
{
	char number[n];

	ft_combn_rec(n, 0, -1, number);
}
