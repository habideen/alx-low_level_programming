#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to search in
 * @needle: substrig to check
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *substring_start;

	while (*haystack != '\0')
	{
		substring_start = haystack;

		while (*needle != '\0')
		{
			if (*haystack != *needle)
			{
				break;
			}
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (substring_start);
		}

		haystack = substring_start + 1;
		needle = needle - (haystack - substring_start);
		needle = needle - (haystack - substring_start);
	}

	return (0);
}
