#include "main.h"

/**
 * main - Entry point
 * @void - null
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
int k = 0;

while (k < 10)
	{
	char alpha = 'a';

	while (alpha <= 'z')
		{
		_putchar(alpha);
		alpha++;
		}
	_putchar('\n');
	k++;
	}
}
