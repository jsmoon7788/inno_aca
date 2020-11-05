#include <stdio.h>

char *ptr_move(char *str, int nb)
{
	int i;

	i = 0;
	while (*str && i++ < nb)
		str++;
	return (str - nb);
}

int main(void)
{
	char c;
	char *str = "here i am at inno academy";

	printf("%s\n", ptr_move(str, 5));

	char hex[17] = "0123456789abcdef";
	c = '\n';
	printf("%c%c\n", hex[(int)c / 16],hex[(int)c % 16]);
}
