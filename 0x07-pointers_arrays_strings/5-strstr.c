#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
 * Return: substring else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack == *sub && *haystack != '\0' && *sub != '\0')
		{
			haystack++;
			sub++;
		}
		if (*sub == '\0')
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}
