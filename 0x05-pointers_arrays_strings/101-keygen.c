#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomChar - Generate a random character from 'A' to 'Z'
 * Return: Random character
 */
char randomChar(void)
{
	return ('A' + rand() % 26);
}

/**
 * main - Generate a random password
 * Return: 0 on success
 */
int main(void)
{
    /* Seed the random number generator with the current time */
	srand(time(NULL));

    /* Set the desired password length */
	int passwordLength = 12;
	int i;

	printf("Generated Password: ");

	for (i = 0; i < passwordLength; i++)
	{
		char randomCharacter = randomChar();

		printf("%c", randomCharacter);
	}

	printf("\n");

	return (0);
}
