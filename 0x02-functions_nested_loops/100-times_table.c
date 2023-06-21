#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints multiplication o given num
 * @n: param
 * Return: null
 */

void print_times_table(int n)
{
if (n > 15 || n < 0)
	return;

int i, j;

for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
		{
		int product = i * j;
		printf("%d\t", product);
		}
	printf("\n");
	}
}
