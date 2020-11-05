/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:39:27 by jumoon            #+#    #+#             */
/*   Updated: 2020/11/03 00:31:28 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, int n);
int			ft_str_is_alpha(char *str);
int			ft_str_is_numeric(char *str);
int			ft_str_is_lowercase(char *str);
int			ft_str_is_uppercase(char *str);
int			ft_str_is_printable(char *str);
char		*ft_strupcase(char *str);
char		*ft_strlowcase(char *str);
char		*ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void		ft_putstr_non_printable(char *str);
void		*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char a_str[300] = "Bonjour les aminches\t\n\vc est fo u\ntout\vce qu on peut faire avec\n\r\fprint_memory\t\t\t\tlol\nlol\t  \v  ";	//dest
    char b_str[50] = "tab\tfomfeed\fcr\r"; //src
    //char c_str[50];
	//int	 n;
 
	//printf("int size: %lu\n", sizeof(int));
	//printf("short char  size: %lu, %lu\n", sizeof(short), sizeof(char));
	//printf("long size: %lu\n", sizeof(long));
	//printf("long long: %lu\n", sizeof(long long));
	//ft_strcpy(b_str, a_str);
	//printf("\nRet: %s\n", ft_strcpy(b_str, a_str));
	//ft_strncpy(a_str, b_str, 6);
	//printf("\ndest: %s\n", a_str);
	//printf("\nRet: %s\n", ft_strncpy(a_str, b_str, 10));
	//printf("%d,%d,%d,%d\n", b_str[4], b_str[5], b_str[6], b_str[7]);
	//printf("Ret: %d\n", ft_str_is_alpha(a_str));
	//n = ft_str_is_alpha(a_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_alpha(b_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//printf("Ret: %d\n", ft_str_is_numeric(a_str));
	//n = ft_str_is_numeric(a_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_numeric(b_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_numeric(c_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//printf("Ret: %d\n", ft_str_is_lowercase(a_str));
	//n = ft_str_is_lowercase(a_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_lowercase(b_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_lowercase(c_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//printf("Ret: %d\n", ft_str_is_uppercase(a_str));
	//n = ft_str_is_uppercase(a_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_uppercase(b_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_uppercase(c_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//printf("Ret: %d\n", ft_str_is_printable(a_str));
	//n = ft_str_is_printable(a_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_printable(b_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//n = ft_str_is_printable(c_str) + '0';
	//write(1, &n, 1);
	//write(1, "\n", 1);
	//printf("Ret: %s\n", ft_strupcase(a_str));
	//printf("Ret: %s\n", ft_strlowcase(a_str));
	//printf("Ret: %s\n", ft_strcapitalize(a_str));
	//printf("Ret: %d, %s, %s\n", ft_strlcpy(a_str, b_str, 3), a_str, b_str);
	//printf("Ret: %d, %s, %s\n", ft_strlcpy(a_str, b_str, 6), a_str, b_str);
	//printf("Ret: %d, %s, %s\n", ft_strlcpy(a_str, b_str, 10), a_str, b_str);
	//printf("strlcpy: %lu, %s, %s\n", strlcpy(a_str, b_str, 3), a_str, b_str);
	//printf("strlcpy: %lu, %s, %s\n", strlcpy(a_str, b_str, 6), a_str, b_str);
	//printf("strlcpy: %lu, %s, %s\n", strlcpy(a_str, b_str, 10), a_str, b_str);
	//ft_putstr_non_printable(a_str);
	//ft_putstr_non_printable(b_str);
	ft_print_memory(a_str, 32);
	return (0);
}
