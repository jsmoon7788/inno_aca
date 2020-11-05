/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 09:50:25 by jumoon            #+#    #+#             */
/*   Updated: 2020/11/01 14:13:04 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **g_instr;

int			make_string_list_from_input(char *str);
int			second_col(char *str, int i, int k, int len);

int			main(void)
{
	int n;
	int ret;
	int len;
	char *tmp;

	tmp = "2102030303812345690";
	ret = make_string_list_from_input(tmp);
	printf("ret value: [%d], str: %s\n", ret, tmp);
	printf("=================================================\n");
	n = 0;
	while (n < ret)
	{
		printf("g_instr[%d]: %s\n", n, g_instr[n]);
		n++;
	}
	printf("=================================================\n");
	len = 0;
	while (tmp[len] != '\0')
		len++;
	n = 0;
	while (n < (len * 2 - 1))
		free(g_instr[n++]);
	free(g_instr);
	return (0);
}
