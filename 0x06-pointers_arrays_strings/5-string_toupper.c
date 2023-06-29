#include "main.h"

/**
 * string_toupper - changes lowercase letters to caps
 * @str: to check
 * Return: str
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
		{
		if (*ptr >= 'a' && *ptr <= 'z')
			{
			*ptr = *ptr - ('a' - 'A');
			}
		ptr++;
		}
		return (str);
}
