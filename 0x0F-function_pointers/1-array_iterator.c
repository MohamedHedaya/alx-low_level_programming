#include <stdlib.h>
/**
 * array_iterator -  main func
 * @array: pointer
 * @size: size
 * @action: param
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
