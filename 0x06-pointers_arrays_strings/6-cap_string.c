#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: string
 * Return: ptr
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] == ' ' || c[i] == '.' || c[i] == '\t' || c[i] == '\n')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= ('a' - 'A');
			}
		}
		i++;
	}
	return (c);
}
