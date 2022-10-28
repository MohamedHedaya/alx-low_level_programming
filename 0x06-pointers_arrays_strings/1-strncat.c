#include "main.h"
/**
 * _strncat - main func
 * @dest: destination string
 * @src: src string
 * @n: num of char to copy
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[i];
	dest[i + j] = '\0';
	return dest;
}
