/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:39:27 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/24 15:35:51 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
extern void	ft_print_alphabet(void);
extern void	ft_print_reverse_alphabet(void);
extern void	ft_print_numbers(void);
extern void	ft_is_negative(int n);
extern void	ft_print_comb(void);
extern void	ft_print_comb2(void);
extern void	ft_putnbr(int nb);
extern void	ft_print_combn(int n);
int	main(void)
{
	//ft_putchar('a');
	//ft_print_alphabet();
	//ft_print_reverse_alphabet();
	//ft_print_numbers();
	//ft_is_negative(-42);
	//ft_is_negative(42);
	//ft_is_negative(0);
	//ft_print_comb();
	//ft_print_comb2();
	//ft_putnbr(2147483647);
	//ft_putnbr(-23);
	//ft_putnbr(-2345);
	//ft_putnbr(-42);
	//ft_putnbr(-2147483648);
	//ft_print_combn(2);
	//write(1, "\n", 1);
	ft_print_combn(1);
	write(1, "\n", 1);
	//ft_print_combn(3);
	//write(1, "\n", 1);
	//ft_print_combn(5);
	//write(1, "\n", 1);
	return (0);
}
