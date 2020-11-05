/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:20:09 by jumoon            #+#    #+#             */
/*   Updated: 2020/11/05 03:20:49 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	long long	len;
	char		*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char*)malloc(len + 1);
	dest[len] = 0;
	while (--len >= 0)
		dest[len] = src[len];
	return (dest);
}
