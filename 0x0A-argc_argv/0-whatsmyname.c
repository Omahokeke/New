#include <stdio.h>
#include "main.h"

/**
 * main - Prints out the name of the program
 * @argc: Number of arguments
 * @argv: Array of characters
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
