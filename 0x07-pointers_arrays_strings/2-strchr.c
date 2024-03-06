#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to search for
 * Return: pointer to the first occurrence of the character c,
 * NULL when not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	/**
	 * check if c is a null
	 */
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
