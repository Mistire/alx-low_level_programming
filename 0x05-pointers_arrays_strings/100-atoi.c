#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (2147483647 - digit) / 10)
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483647);
			}
		}
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
