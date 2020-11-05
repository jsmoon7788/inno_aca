/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 20:58:13 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/21 14:04:08 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_i_to_c(int n1, int n2)
{
	char num_str[6];

	num_str[0] = n1 / 10 + '0';
	num_str[1] = n1 % 10 + '0';
	num_str[2] = ' ';
	num_str[3] = n2 / 10 + '0';
	num_str[4] = n2 % 10 + '0';
	num_str[5] = '\0';
	write(1, num_str, 5);
}

void		ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j)
			{
				ft_i_to_c(i, j);
				if (i == 98)
					break ;
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
