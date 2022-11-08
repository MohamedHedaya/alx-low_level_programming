#include "main.h"
#include <stdlib.h>
/**
 * str_concat - main fun
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i = 0;
	char *result;
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	result = malloc(sizeof (char) * (size1 + size2));
	if (result == NULL)
		return (NULL);
	while (i < size1)
	{
		result[i] = s1[i];
		i++;
	}
	while ((i - size1) < size2)
	{
		result[i] = s2[i - size1];
		i++;
	}
	return (result);
}
