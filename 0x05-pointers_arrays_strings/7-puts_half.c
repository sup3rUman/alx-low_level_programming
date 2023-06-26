#include "main.h"

/**
 * puts_half - prints upto half of the string
 * @str: string pointer
 */

void puts_half(char *str)
{
	int length = 0;
	int start_index;

	while (str[length] != '\0')
		{
		length++;
		}

	start_index = (length % 2 == 0) ? (length / 2) : ((length - 1) / 2 + 1);

	while (str[start_index] != '\0')
		{
		_putchar(str[start_index]);
		start_index++;
		}

	_putchar('\n');
}
