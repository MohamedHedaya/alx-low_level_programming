#include "main.h"
/**
 * _strcat - main func
 * @dest: input 1
 * @src: input 2
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
