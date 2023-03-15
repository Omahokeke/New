#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - duplicate to new memory space location
  * @str: char
  * Return: 0 if str is NULL
  */

char *_strdup(char *str)
{
	char *ptArray;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ptArray = malloc(i * sizeof(char) + 1);

	if (ptArray == NULL)
			return (NULL);
	for (r = 0; str[r]; r++)
		ptArray[r] = str[r];
	return (ptArray);
