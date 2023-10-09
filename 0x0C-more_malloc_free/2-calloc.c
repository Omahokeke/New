#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory
 * @pointer: memory area
 * @c: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area
 */

char *_memset(char *pointer, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		pointer[i] = c;
	}

	return (pointer);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elementws in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	return (NULL);

_memset(ptr, 0, nmemb * size);
return (ptr);
}
