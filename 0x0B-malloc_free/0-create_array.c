#include "stdio.h"
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	pointer = malloc(sizeof(char) * size);
	if (size == 0 || pointer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		pointer[i] = c;
	return (pointer);
}
