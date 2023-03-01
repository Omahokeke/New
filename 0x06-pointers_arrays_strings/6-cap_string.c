#include "main.h"

/**
 * cap_strings - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] ==  ' ' ||

