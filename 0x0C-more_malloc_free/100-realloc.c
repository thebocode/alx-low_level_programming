#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: the size in bytes for the ptr
 * @new_size: the size in bytes for new memory block
 * Return: If new_size > old_size, added memory should not be initialized
 * If new_size == old_size, return ptr
 * otherwise return ptr to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	c = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		c[i] = *ptr_copy++;

	free(ptr);
	return (mem);
}
