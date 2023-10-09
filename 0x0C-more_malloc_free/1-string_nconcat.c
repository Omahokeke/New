#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;

		while (s1 && s1[size1])
			size1++;
		while (s2 && s2[size2])
			size2++;

		if (n < size2)
			pointer = malloc(sizeof(char) * (size1 + n + 1));
		else
			pointer = malloc(sizeof(char) * (size1 + size2 + 1));

		if (!pointer)
			return (NULL);

		while (i < size1)
	{
			pointer[i] = s1[i];
				i++;
	}

		while (n < size2 && i < (size1 + n))
			pointer[i++] = s2[j++];
		while (n >= size2 && i < (size1 + size2))
			pointer[i++] = s2[j++];

	pointer[i] = '\0';

	return (pointer);
}
