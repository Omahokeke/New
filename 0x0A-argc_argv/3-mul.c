#include <stdio.h>
#include "main.h"

/**
 * main - Prints the result of multiplication
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);

	int Answer = number1 * number2;

	printf("%d\n", Answer);

	return (0);
}
