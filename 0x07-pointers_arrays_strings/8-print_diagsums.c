#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: square matrix
 * @size: size of matrix, row or column
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int index;
	int sum1 = 0;
	int sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += *(a + (size * index + index));
		sum2 += *(a + (size * index + size - index - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
