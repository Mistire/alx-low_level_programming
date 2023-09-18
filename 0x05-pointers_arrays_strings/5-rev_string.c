#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i;

	int len = sizeof(s) / sizeof(s[0]);

        for(i = len - 1; s[i] != '\0'; i--)
        {
                _putchar(s[i]);
        }
        putchar('\n');
}
