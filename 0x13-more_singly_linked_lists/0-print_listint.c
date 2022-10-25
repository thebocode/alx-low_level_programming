#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: a pointer to the head of the list_t list
 * Return: the number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ret = h;
	size_t nodes = 0;

	while (ret != NULL)
	{
		printf("%d\n", ret->n);
		count += 1;
		ret = ret->next;
	}
	return (nodes);
}
