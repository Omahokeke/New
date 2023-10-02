#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments
 * @argv: String of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	for(int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
