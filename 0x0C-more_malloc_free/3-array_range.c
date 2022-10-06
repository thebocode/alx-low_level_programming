#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: first value of the array
 * @max: highest value of the array
 * Return: if min > max, return NULL, otherwise pointer to array
 */

int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
