#include <stdio.h>
/**
 * main - fibonacci
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c,  i;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}

	return (0);
}
