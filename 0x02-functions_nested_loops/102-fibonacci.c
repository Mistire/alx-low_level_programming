#include <stdio.h>
/**
 * main - fibonacci
 * Return: 0
 */
int main(void)
{
	unsigned long a = 1, b = 2, c,  i;

	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%lu, ", a);
		} else
		{
			printf("%lu\n", a);
		}
			c = a + b;
			a = b;
			b = c;
	}

	return (0);
}
