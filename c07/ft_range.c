/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:26:43 by jumoon            #+#    #+#             */
/*   Updated: 2020/11/05 06:19:57 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int			*m_ptr;
	int			*tmp;

	if (min >= max)
		return (0);
	m_ptr = (int *)malloc((int)sizeof(int) * (max - min));
	if (!m_ptr)
		return (0);
	tmp = m_ptr;
	while (min < max)
		*(tmp)++ = min++;
	return (m_ptr);
}
