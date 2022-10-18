#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - main func
 * @n: input
 * Return: void
 */
void print_to_98(int n)
{
printf("%d", n);
while (n != 98)
{
if (n > 98)
n--;
if (n < 98)
n++;
printf(", %d", n);
}
printf("\n");
}
