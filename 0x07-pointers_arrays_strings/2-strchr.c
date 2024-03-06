#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to search for
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (c == s[x])
		{
			return (&(s[x]));
		}
	}

	return (0);
}
