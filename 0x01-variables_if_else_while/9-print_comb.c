#include <stdio.h>

/**
 * main - Entry point
 * @void - null
 * Return: Always 0 ((success)
 */

int main(void)
{
int num;

for (num = 0; num <= 9; num++)
	{
	putchar(num + '0');

	if (num != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
