/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 23:18:56 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/21 13:44:33 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		digit_rec(int n)
{
	char c;

	if (n == 0)
	{
		return ;
	}
	digit_rec (n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		write(1, "-", 1);
		digit_rec( (- nb));
	}
	else
	{
		digit_rec(nb);
	}
}
