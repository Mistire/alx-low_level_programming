#include "main.h"
/**
 * _strpbrk - string for any of a set of bytes
 * @s: string
 * @accept: bytrs
 * Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
