#include "main.h"
/**
 * _memset - main func
 * @s: buffer
 * @b: byte
 * @n: count
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
