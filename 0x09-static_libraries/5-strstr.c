#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - Locates the first occurrence of the substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: A pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
