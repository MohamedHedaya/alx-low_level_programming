#include "main.h"
/**
 * _strpbrk - main func
 * @s: char
 * @accept: char
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
