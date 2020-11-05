/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:39:27 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/28 13:15:08 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//void	ft_ft(int *nbr);
//void ft_ultimate_ft(int **nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int	 ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	//int **nbr = 0;
	int x, y;  // ft_swap, ft_div_mod test용 
	int dv, md;
	int tab[6];
	int size;

	//ft_ft(nbr);
	//ft_ultimate_ft(nbr);
	//printf("%d\n", **nbr);
	x = 7; 
	y = 9;
	//printf("a = %d, b = %d\n", x, y);
	//ft_swap(&x, &y);
	//printf("a = %d, b = %d\n", x, y);
	//printf("x = %d, y = %d\n", x, y);
	//ft_div_mod(x, y, &dv, &md);
	//printf("div = %d, mod = %d\n", x, y);
	//printf("x = %d, y = %d\n", x, y);
	//ft_ultimate_div_mod(&x, &y);
	//printf("div = %d, mod = %d\n", x, y);
	//ft_putstr("42 seoul piscine");
	//printf("strlen: %d\n", ft_strlen("Here I am in cluster #7"));
	tab[0] = 72;
	tab[1] = 51;
	tab[2] = 26;
	tab[3] = 47;
	tab[4] = 11;
	tab[5] = 29;
	size = 6;
	printf("Bef: %d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	//ft_rev_int_tab(tab, size);
	ft_sort_int_tab(tab, size);
	printf("AFT: %d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);


	//printf("%d\n", ft_strlen("abcdef"));

	return (0);
}
