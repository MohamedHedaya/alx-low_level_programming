#include "main.h"
/**
 * _strchr - main func
 * @s: input
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	return (s + i);
}
