#include "main.h"
/**
 * factorial - main func
 * @n: input
 * Return: int
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
