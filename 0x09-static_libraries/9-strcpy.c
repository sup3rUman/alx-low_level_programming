#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcpy - Copies a string null character, from source to destination.
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The pointer to the destination string (dest)
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_orig = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_orig);
}
