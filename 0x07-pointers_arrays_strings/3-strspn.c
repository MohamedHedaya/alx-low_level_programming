#include "main.h"
/**
 * _strspn - main func
 * @s: char
 * @accept: char
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int count = 0;
	int j;

	while (*(s + i) != '\n' && *(s + i) != ' ')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}
