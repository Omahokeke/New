#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t size = strlen(str);

	char *copy = (char *)malloc((size + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);

	return (copy);
}

