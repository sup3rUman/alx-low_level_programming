#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
