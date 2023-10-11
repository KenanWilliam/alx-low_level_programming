#include "main.h"
#include <stdio.h>

/**
 * main - print all natural numbers
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	n++;
	}
	printf("\n");
	return (0);
}


