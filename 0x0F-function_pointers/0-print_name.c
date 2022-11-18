#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - main func
 * @name: pointer
 * @f: name
 * Return: void
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
