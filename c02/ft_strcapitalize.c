/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoon <jumoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 23:58:38 by jumoon            #+#    #+#             */
/*   Updated: 2020/10/29 02:18:44 by jumoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 'a' + 'A';
		c = str[i];
		if (!((ft_is_alpha(c)) || (c >= '0' && c <= '9')))
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 'a' + 'A';
		if ((ft_is_alpha(c)) || (c >= '0' && c <= '9'))
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
				str[i + 1] = str[i + 1] - 'A' + 'a';
		i++;
	}
	return (str);
}
