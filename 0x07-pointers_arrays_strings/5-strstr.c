/**
 * _strstr - a function that locates a substring
 * @haystack: string1
 * @needle: string2
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (haysytack)
	{
		char *n = needle;
		char *h = haystack;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
