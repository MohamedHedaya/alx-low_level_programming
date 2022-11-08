
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - main func
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	unsigned int size = 0, i = 0;
	char *cop;
	while (str[size])
	{
		size++;
	}
	if (size == 0)
		return (NULL);
	cop = malloc(sizeof (char) * size);
	while (i < size)
	{
		cop[i] = str[i];
		i++;
	}
	return (cop);
}
