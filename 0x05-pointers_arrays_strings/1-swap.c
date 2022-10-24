#include "main.h"
/**
 * swap_int - main func
 * @a: input 1
 * @b: input 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
