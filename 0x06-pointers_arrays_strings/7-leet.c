#include "main.h"
/**
 * leet -  encodes a string
 * @str: character
 * Return: ptr
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		if (str[i] == 'A' || str[i] == 'a')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	str++;
	}

	return (str);
}
