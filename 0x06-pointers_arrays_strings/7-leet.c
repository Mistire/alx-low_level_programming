#include "main.h"
/**
 * leet -  encodes a string
 * @str: character
 * Return: ptr
 */
char *leet(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		char c = *str;

		if (c == 'A' || c == 'a')
		{
			*str = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			*str = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			*str = '0';
		}
		else if (c == 'l' || c == 'L')
		{
			*str = '1';
		}
	str++;
	}

	return (ptr);
}
