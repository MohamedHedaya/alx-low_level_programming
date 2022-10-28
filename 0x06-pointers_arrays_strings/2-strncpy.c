#include "main.h"
/**
 * _strncpy - main func
 * @src: input 1
 * @dest: input 2
 * @n: input 3
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)

		dest[i] = '\0';


	}
	return (dest);
}
