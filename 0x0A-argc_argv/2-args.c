#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments
 * @argc: the # of args
 * @argv: the names of args
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
