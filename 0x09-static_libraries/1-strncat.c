#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - Concatenates using at most n bytes from the source string.
 * @dest: The destination string.
 * @src: The source string
 * @n: The maximum number of bytes to be used from src
 *
 * Return: The pointer to the resulting string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_orig = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (dest_orig);
}
