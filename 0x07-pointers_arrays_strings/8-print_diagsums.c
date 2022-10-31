#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - main func
 * @a: int
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, i = 0, j = 0;

	for (b = 0; b < size; b++)
	{
		i += a[(size + 1) * b];
		j += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", i, j);
}
