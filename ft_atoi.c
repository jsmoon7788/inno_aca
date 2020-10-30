#include <stdio.h>

int		ft_atoi(char *str)
{
	int	i;
	int	ret;
	int	sign;
	char c;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	ret = 0;
	while (str[i] != '\0')
	{
		printf("1st while Bef if: %c\n", str[i]);
		c = str[i];
		if (c == ' ' || c == '\n' || c == '\t' || 
					c == '\v' || c == '\f' || c == '\r')
			i++;
		else
			break;
		printf("1st while:Aft if %c\n", c);
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
		printf("2nd while:sign: %d i: %d\n", sign, i); 
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (sign * ret); 
}

int		main(void)
{
	printf("%d\n", ft_atoi(" ---++--123"));
	return (0);
}
