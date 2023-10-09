#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - checks if a string contains a non-digit char
 * @pointer: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *pointer)
{
	int i = 0;

	while (pointer[i])
	{
		if (pointer[i] < '0' || pointer[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @pointer: string to be evalated
 * Return: the length of string
 */
int _strlen(char *pointer)
{
	int i = 0;

	while (pointer[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - takes care of errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *pointer1, *pointer2;
	int size1, size2, size, i, carry, digit1, digit2, *result, a = 0;

	pointer1 = argv[1], pointer2 = argv[2];
	if (argc != 3 || !is_digit(pointer1) || !is_digit(pointer2))
		errors();
	size1 = _strlen(pointer1);
	size2 = _strlen(pointer2);
	size = size1 + size2 + 1;
	result = malloc(sizeof(int) * size);
	if (!result)
		return (1);
	for (i = 0; i <= size1 + size2; i++)
		result[i] = 0;
	for (size1 = size1 - 1; size1 >= 0; size1--)
	{
		digit1 = pointer1[size1] - '0';
		carry = 0;
	for (size2 = _strlen(pointer2) - 1; size2 >= 0; size2--)
	{
	digit2 = pointer2[size2] - '0';
	carry += result[size1 + size2 + 1] + (digit1 * digit2);
	result[size1 + size2 + 1] = carry % 10;
	carry /= 10;
	}
	if (carry > 0)
	result[size1 + size2 + 1] += carry;
	}
for (i = 0; i < size - 1; i++)
{
if (result[i])
a = 1;
if (a)
_putchar(result[i] + '0');
}
if (!a)
	_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
