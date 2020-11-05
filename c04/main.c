/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:39:27 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/29 22:34:46 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int			ft_strlen(char *str);
void		ft_putstr(char *str);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, unsigned int nb);
char		*ft_strstr(char *src, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char a_str[50] = "hello";	//dest
    char b_str[50] = " world"; //src
    char c_str[50];
	int	 n;
 
	//printf("ret: %d\n", ft_strlen(a_str));
	ft_putstr(a_str);
	//printf("ret: %d\n", ft_strncmp(a_str, b_str, 5));
	//printf("ret: %d\n", ft_strncmp(a_str, b_str, 6));
	//printf("ret: %s,d: %s, s: %s\n", ft_strcat(a_str, b_str), a_str, b_str);
	//printf("ret: %s,d: %s, s: %s\n", ft_strncat(a_str, b_str, 3), a_str, b_str);
	//printf("ret: %s,d: %s, s: %s\n", ft_strncat(a_str, b_str, 6), a_str, b_str);
	//printf("ret: %s,d: %s, s: %s\n", ft_strncat(a_str, b_str, 9), a_str, b_str);
	//printf("ret: %s\n", ft_strstr(a_str, b_str));
	//printf("ret: %d, d: %s, s: %s\n", ft_strlcat(a_str, b_str, 10), a_str, b_str);
	return (0);
}
