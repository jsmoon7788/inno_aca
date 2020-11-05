/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_string_list_from_input.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:41:49 by jumoon            #+#    #+#             */
/*   Updated: 2020/11/01 06:43:30 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	**g_instr;
int		g_i;
int		g_len;
int		g_flag;

void	asign_mloc(int k, int size, char ca, char cb)
{
		g_instr[k] = (char *)malloc(sizeof(char) * size);
		g_instr[k][0] = ca;
		g_instr[k][1] = cb;
		g_instr[k][2] = '\0';
}

int		first_col(char *str, int i, int k)
{
	if (str[i] != '0')
	{
		g_instr[k] = (char *)malloc(sizeof(char) * 2);
		g_instr[k][0] = str[i];
		g_instr[k][1] = '\0';
		printf("1st k: %d, %s\n", k, g_instr[k]);
		k++;
		g_instr[k] = (char *)malloc(sizeof(char) * 4);
		g_instr[k][0] = '1';
		g_instr[k][1] = '0';
		g_instr[k][2] = '0';
		g_instr[k][3] = '\0';
		printf("1st k: %d, %s\n", k, g_instr[k]);
		k++;
	}
	return (k);
}

int		second_col(char *str, int i, int k, int len)
{
	if (str[i] == '1')
	{
		asign_mloc(k, 3, str[i], str[i + 1]);
		k++;
		g_flag = 1;
		i = i + 2;
		len = len - 2;
	}
	else if (str[i] >= '2')
	{
		asign_mloc(k, 3, str[i], '0');
		k++;
		i++;
		len--;
	}
	else
	{
		i++;
		len--;
	}
	g_i = i;
	g_len = len;
	return (k);
}

int		third_col(char *str, int i, int k)
{
	if (str[i] != '0')
	{
		g_instr[k] = (char *)malloc(sizeof(char) * 2);
		g_instr[k][0] = str[i];
		g_instr[k][1] = '\0';
		printf("3rd k: %d, %s\n", k, g_instr[k]);
		k++;
	}
	return (k);
}

int		num_thousand(int dvid, int k)
{
	int i;
	int n;
	char *tmpstr;

	printf("in thou dv: %d, k: %d\n", dvid, k);
	i = 0;
	tmpstr[0] = '1';
	printf("tmpstr [0]: %c\n", tmpstr[i]);
	while (i < dvid)
	{
		i++;
		tmpstr[i] = '0';
		printf("tmpstr [%d]: %c\n", i, tmpstr[i]);
	}
	tmpstr[++i] = '\0';
	printf("in tho tmpstr: %s\n", tmpstr);
	g_instr[k] = (char *)malloc(sizeof(char) * (i + 2));
	n = 0;
	while (tmpstr[n] != '\0')
	{
		g_instr[k][n] = tmpstr[n];
		n++;
	}
	g_instr[k][n] = '\0';
	k++;
	return (k);
}

int			make_string_list_from_input(char *str)
{
	int	div;
	int	i;
	int	n_key;
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	g_instr = (char **)malloc(sizeof(char *) * len * 2);
	i = 0;
	n_key = 0;
	len = len - 1;
	div = len / 3;
	while (div >= 0)
	{
		g_flag = 0;
		if (len % 3 == 2)
		{
			n_key = first_col(str, i, n_key);
			i++;
			len--;
		}
		if (len % 3 == 1)
		{
			n_key = second_col(str, i, n_key, len);
			i = g_i;
			len = g_len;
		}
		if (len % 3 == 0 && g_flag == 0)
		{
			n_key = third_col(str, i, n_key);
			i++;
			len--;
			g_flag = 1;
		}
		if (div != 0)
		{
			n_key = num_thousand(div * 3, n_key);
		}
		div--;
	}
	return (n_key);
}

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
