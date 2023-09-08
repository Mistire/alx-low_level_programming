#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	printf("Last digit of %d is %d", n, last);
	if (n > 5)
	{
		printf("and greater than 5\n");
	}
	else if (n == 0)
	{
		printf("and is 0\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
