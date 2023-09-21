#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: char
 * Return: ptr
 */
char *string_toupper(char *c)
{
	char *ptr = c;

	while (c != '\0')
	{
		if (c >= 'a' || c <= 'z')
		{
			*c -= ('a' - 'A');
		}
		c++;
	}
	return (ptr);
}
