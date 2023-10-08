#include <stdio.h>

/**
   * main - print alphabet in lowercase
   *
   *Return: zero
   */

int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
putchar('\n');
return (0);
}
