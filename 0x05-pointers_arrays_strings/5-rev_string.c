#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;
	int len = strlen(s);
	int j = len - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}

}
