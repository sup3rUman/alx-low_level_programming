#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - Copies at most n characters from the source string
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of characters to be copied
 *
 * Return: The pointer to the destination string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
