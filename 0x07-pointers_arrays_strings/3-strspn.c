#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check
 * @accept: string of accepted characters
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *temp = accept;
	int found;

	while (*s != '\0')
	{
		found = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}

		if (!found)
		{
			return (length);
		}

		s++;
		length++;
		accept = temp;
	}

	return (length);
}
