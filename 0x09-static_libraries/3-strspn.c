#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * Calculates the length of the initial segment of s
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
