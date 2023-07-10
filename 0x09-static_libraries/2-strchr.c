#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: A pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
