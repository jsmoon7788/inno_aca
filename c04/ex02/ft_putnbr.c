/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 23:18:56 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/22 03:35:57 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_digit_rec(int n)
{
	char c;

	if (n > -10 && n < 10)
	{
		if (n < 0)
			c = '0' - n % 10;
		else
			c = '0' + n % 10;
		write(1, &c, 1);
		return ;
	}
	ft_digit_rec(n / 10);
	if (n < 0)
		c = '0' - n % 10;
	else
		c = '0' + n % 10;
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	ft_digit_rec(nb);
}
