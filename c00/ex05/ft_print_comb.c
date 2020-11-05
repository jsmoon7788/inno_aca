/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comft_print_comb.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 23:55:26 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/21 14:03:47 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_comb(void)
{
	char num[4];

	num[0] = '0';
	num[3] = '\0';
	while (num[0] <= '7')
	{
		num[1] = '0';
		while (num[1] <= '8')
		{
			num[2] = '0';
			while (num[2] <= '9')
			{
				if (num[0] < num[1] && num[1] < num[2])
				{
					write(1, num, 3);
					if (num[0] == '7' && num[1] == '8')
						break ;
					write(1, ", ", 2);
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
