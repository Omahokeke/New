#include "main.h"
#include <stdlib.h>

/**
  * create_array - create array of size size and assign char c
  * @size: size of memory allocation
  * @c: character to be assigned
  * Description: create array of size size and assign the character c to it
  * Return: pointer to array, NULL if fail
  */

char *create_array(unsigned int size, char c)
{
	char *ptarray;
	unsigned int i;

	ptarray = malloc(size * sizeof(char));
	if (size == 0 || ptarray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptarray[i] = c;
	return (ptarray);
}
