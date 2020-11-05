#include <stdio.h>

void print_back();

int main()
{
	printf("enter str: "); print_back();
	printf("\n");
}

void print_back()
{
	int ch;
	if ((ch =getchar()) != '\n')
	{
		print_back();
	}
	putchar(ch);
}
