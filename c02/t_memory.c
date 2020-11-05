/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:04:39 by jumoon            #+#    #+#             */
/*   Updated: 2020/11/03 00:23:12 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *g_hex;
char g_str[16];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_addr(long long addr, int cnt)
{
	if (!addr)
	{
		while (cnt++ < 16)
		{
			printf("cnt:%d ", cnt);
			ft_putchar('0');
		}
		return ;
	}
	printf("addr: 0x%p: ", &addr);
	print_addr(addr >> 4, cnt + 1);
	ft_putchar(g_hex[addr % 16]);
}

void	process(unsigned char *ptr, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (i % 2 == 0)
		{
			ft_putchar(' ');
	printf("In if: putchar sp1\n");
		}
		if (' ' <= ptr[i] && ptr[i] <= '~')
			g_str[i] = ptr[i];
		else
			g_str[i] = '.';
		ft_putchar(g_hex[(int)ptr[i] / 16]);
		ft_putchar(g_hex[(int)ptr[i] % 16]);
		++i;
	}
	printf("bef: putchar sp1, sp2\n");
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
		++i;
	}
	printf("Aft: putchar sp1, sp2\n");
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				len;
	unsigned char	*ptr;

	g_hex = "0123456789abcdef";
	i = 0;
	while (size)
	{
		if (size / 16)
			len = 16;
		else
			len = size;
		ptr = (unsigned char*)addr + i;
		printf("ptr: %s\n", ptr);
		printf("ptr: 0x%p\n", &ptr);
		print_addr((long long)ptr, 0);
		ft_putchar(':');
		process(ptr, len);
		ft_putchar(' ');
		write(1, g_str, len);
		ft_putchar('\n');
		size -= len;
		i += 16;
	}
	return (addr);
}
