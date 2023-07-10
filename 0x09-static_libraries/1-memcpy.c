#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - Copies n bytes from the memory area src to the memory area dest.
 * @dest: The destination memory area.
 * @src: The source memory area
 * @n: The number of bytes to be copied
 *
 * Return: A pointer to the destination memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
