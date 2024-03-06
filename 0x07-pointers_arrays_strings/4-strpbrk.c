#include "main.h"

/**
 * _strpbrk - return the remaining string from the first occurences in accept
 * @s: string to search in
 * @accept: string of accepted characters
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return (0);
}
