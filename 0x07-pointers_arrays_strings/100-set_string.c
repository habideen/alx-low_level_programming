#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer of a string
 * @to: pointer of another string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
