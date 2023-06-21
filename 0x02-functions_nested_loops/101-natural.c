#include <stdio.h>

/**
 * main - Entry point
 * @void: null
 * Return: 0 on success
 */

int main(void)
{
int limit = 1024;
int sum = 0;
int i;

for (i = 1; i < limit; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
		{
		sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
