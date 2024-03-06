#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes of the memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
