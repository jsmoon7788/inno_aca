/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 04:08:27 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/22 04:17:28 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_recur_combn(int n, int depth, int before, char number[])
{
	int number_index;
	int cur_num;

	number_index = 0;
	cur_num = before + 1;
	if (depth == n)
	{
		while (number_index < n)
			ft_putchar(number[number_index++]);
		if (number[0] != 58 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}

printf("Rec: before return : number %s\n", number);
		return ;
	}
	while (cur_num <= 9)
	{
		number[depth] = 48 + cur_num;
printf("Rec: before recursive : number %s\n", number);
		ft_recur_combn(n, depth + 1, cur_num, number);
printf("Rec: after  recursive : number %s\n", number);
		cur_num++;
	}
}

void		ft_print_combn(int n)
{
	char number[n];
printf("Main: before recur\n");
	ft_recur_combn(n, 0, -1, number);
printf("Main: after  recur\n");
	
}
