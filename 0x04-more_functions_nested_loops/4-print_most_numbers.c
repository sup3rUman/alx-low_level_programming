#include "main.h"

/**
 * print_most_numbers - prints certain nums
 * @void: null
 */

void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
	{
	if (i != 4 && i != 2)
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}
