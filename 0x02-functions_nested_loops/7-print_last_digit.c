#include "main.h"
/**
 * print_last_digit - main func
 * @n: input num
 * Return: last digit
 */
int print_last_digit(int n)
{
int i, abs;
abs = _abs(n);
i = abs % 10;
_putchar(i + '0');
return (i);
}
