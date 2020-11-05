/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 04:08:27 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/24 13:00:54 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
			printf("R while1 bef write(dep, idx, n): %d %d %d\n", dep, num_index, n);
			write(1, &number[num_index], 1);
			num_index++;
			printf("R while1 aft write(dep, idx, n): %d %d %d\n", dep, num_index, n);
		}
			printf("R aft whie1, idx, n): %d %d %d\n", dep, num_index, n);
		if (number[0] != '9' + 1 - n)
			write(1, ", ", 2);
			printf("R bef return, idx, n): %d %d %d\n", dep, num_index, n);
		return ;
	}
	while (cur_num <= 9)
	{
			printf("R while2 bef rec(dep, cur_num, n): %d %d %d\n", dep, cur_num, n);
		number[dep] = '0' + cur_num;
		ft_combn_rec(n, dep + 1, cur_num, number);
		cur_num++;
			printf("R while2 aft rec(dep, cur_num, n): %d %d %d\n", dep, cur_num, n);
	}
}

void		ft_print_combn(int n)
{
	char number[n];

	ft_combn_rec(n, 0, -1, number);
}
