#include "main.h"
#include "stdio.h"
/**
 * puts_recursion - main func
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		print('\n');
	}
	else
	{
		print(s[0]);
		_puts_recursion(s + 1);
	}
	return (0);
}
