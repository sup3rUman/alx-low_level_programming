#include "main.h"

/**
 **_strcat - concantates two strings
 * Return: dest
 * @dest: char
 * @src: character
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		{
		ptr++;
		}

	while (*src != '\0')
		{
		*ptr = *src;
		ptr++;
		src++;
		}
	*ptr = '\0';
	return (dest);
}
