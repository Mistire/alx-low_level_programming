#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: string
 * Return: ptr
 */
char *cap_string(char *c)
{
	char *ptr = c;

	while (*c != '\0')
	{
		if (*c == ' ' || *c == '\n' || *c == '\t')
		{
			if (*c >= 'a' && *c <= 'z')
			{
				*c -= ('a' - 'A');
			}
		}
		c++;
	}
	return (ptr);
}
