#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while(str[len] != '\0')
		len++;
	while(i < len)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a';
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'A';
	}
	return (str);
}

int		main(void)
{
	printf(
