#include "main.h"
#include <stdio.h>

/**
 * main - print all natural numbers
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;
	for (int i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		} else {
			printf("%d\n", i);
		}
	}
	return (0);
}

