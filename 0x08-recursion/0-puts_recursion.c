#include "main.h"
/**
 * puts_recursion - main func
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	return (0);
}
