/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:39:27 by jumoon            #+#    #+#             */
/*   Updated: 2020/11/05 00:51:02 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);

int	main(void)
{
	//printf("ite fact: %d\n", ft_iterative_factorial(16));
	//printf("rec fact: %d\n", ft_recursive_factorial(16));
	//printf("ite power: %d\n", ft_iterative_power(15, 7));
	//printf("rec power: %d\n", ft_recursive_power(15, 7));
	//printf("fibonacci: %d\n", ft_fibonacci(7));
	//printf("sqrt: %d\n", ft_sqrt(16));
	printf("prime: %d\n", ft_is_prime(7));
	//printf("next prime: %d\n", ft_find_next_prime(2));

	return (0);
}
