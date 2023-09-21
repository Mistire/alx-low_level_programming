#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string1
 * @src: string2
 * @n: integer
 * Return: ptr
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (ptr);
}
