#include "main.h"
/**
 * _puts - main func
 * @str: input
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
