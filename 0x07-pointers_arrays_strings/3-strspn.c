/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accpets bytes
 * Return: the number of bytes in the intial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accpet;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
