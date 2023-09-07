#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	int i = 0;

	while (quote[i] != '\0')
	{
		putchar(quote[i]);
		i++;
	}
	putchar('\n');

	return (1);
}
