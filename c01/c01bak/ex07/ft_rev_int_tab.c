/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:41:07 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/26 21:36:10 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		tmp = *(tab + i);
		*(tab + i) = *(tab + size - 1);
		*(tab + size - 1) = tmp;
		i++;
		size--;
	}
}
