#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * print_error_and_exit - Prints an error message and exits with status 98.
 */

void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */

unsigned long int multiply(unsigned long int num1, unsigned long int num2)
{
	return (num1 * num2);
}

/**
 * is_positive_number - Checks if a string represents a positive number.
 * @str: The string to check.
 *
 * Return: 1 if the string represents a positive number, 0 otherwise.
 */

int is_positive_number(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}

	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: param count
 * @argv: arguent vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	unsigned long int num1, num2, result;

	if (argc != 3)
		print_error_and_exit();

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
		print_error_and_exit();

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	result = multiply(num1, num2);

	printf("%lu\n", result);

	return (0);
}	
