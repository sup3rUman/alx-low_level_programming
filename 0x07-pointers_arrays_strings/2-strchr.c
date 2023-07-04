#include "main.h"
#include <stddef.h>

/**
 * _strchr- locates character in a string
 * @s: pointer to the string where the character will be searched.
 * @c: character to be located.
 * Return: s (success) NULL otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (c == '\0')
		{
			return (s);
		}
		return (NULL);
}
