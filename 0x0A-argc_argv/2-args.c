#include <stdio.h>

/**
 * main - entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: always 0
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
