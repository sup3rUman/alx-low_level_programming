#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @bytes: The number of bytes to print.
 *
 */

void print_opcodes(int bytes)
{
	char *address = (char *)&print_opcodes;
	int i;

	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02hhx ", address[i]);
	}
	printf("%02hhx\n", address[i]);

}

/**
 * main - entry point
 * @argc: num of command-line arguments
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return:  0 on success, 1 if the number of arguments is incorrect,
 * 	2 if the number of bytes is negative.
 *
 */

int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		
		return (1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");

		return (2);
	}

	print_opcodes(bytes);
	return (0);
}
