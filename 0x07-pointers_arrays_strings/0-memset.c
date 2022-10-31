#include "main.h"
/**
 * _memset - main func
 * @s: buffer
 * @b: byte
 * @n: count
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		s[i] = b;
	}
	return (s);
}
