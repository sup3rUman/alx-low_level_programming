#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the characters to search for
 *
 *  Return: A pointer to the byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
