#include "main.h"
/**
 * _memcpy - func main
 * @dest: dest
 * @src: src
 * @n: number
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
