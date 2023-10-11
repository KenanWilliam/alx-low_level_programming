#include "main.h"
#include <stdio.h>

/**
 * print_times_table - can create any times table between 1 and 15
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++) 
		{
			printf("%3d ", i * j);
		}
		printf("\n");
	}
}
