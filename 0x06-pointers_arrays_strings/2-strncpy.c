#include "main.h"
/**
 * _strncpy -  copies a string
 * @dest: string1
 * @src: string2
 * @n: integer
 * Return: ptr
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (ptr);
}
