#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *  _memset - Fills the first n bytes of the memory
 *  @s: Pointer to the memory area to be filled
 *  @b: The constant byte to be set
 *  @n: The number of bytes to be set
 *
 *  Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
