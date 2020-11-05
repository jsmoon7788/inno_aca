/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_col.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:48:34 by jumoon            #+#    #+#             */
/*   Updated: 2020/11/01 14:45:35 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**g_instr;
int		g_flag;

void	asign_mloc(int k, int size, char ca, char cb)
{
	g_instr[k] = (char *)malloc(sizeof(char) * size);
	g_instr[k][0] = ca;
	g_instr[k][1] = cb;
	g_instr[k][2] = '\0';
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
	return (k);
}
