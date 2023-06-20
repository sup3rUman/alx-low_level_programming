#include "main.h"

/**
 * print_last_digit - scan last digit
 * @r:  number to check
 * Return: last digit
 */

int print_last_digit(int r)
{
int l_d = r % 10;

if (l_d < 0)
	{
	l_d = -l_d;
	}
_putchar(l_d + '0');
return (l_d);
}
