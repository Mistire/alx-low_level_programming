#include <stdio.h>
/**
 * leet - encode string
 * @str: string
 * Return: ptr
 */
char *leet(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		char c = *str;

		if ((c == 'a' || c == 'A') || (c == 'e' || c == 'E') || (c == 'o' || c == 'O') || (c == 't' || c == 'T') || (c == 'l' || c == 'L'))
		{
			if (c == 'a' || c == 'A')
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
			else if (c == 't' || c == 'T')
			{
				*str = '7';
			}
			else if (c == 'l' || c == 'L')
			{
				*str = '1';
			}
		}

		str++;
	}

	return (ptr);
}
