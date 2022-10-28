#include "main.h"
/**
 * _strcat - main func
 * @dest: input 1
 * @src: input 2
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return dest;
}
