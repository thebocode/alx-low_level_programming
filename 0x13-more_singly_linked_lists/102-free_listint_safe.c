#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: pointer to the head of the listint_t
 * Return: number of unique nodes in the list
 * If the list is not looped - 0
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *a, *b;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = b;
			while (a != b)
			{
				nodes++;
				a = a->next;
				b = b->next;
			}

			a = a->next;
			while (a != b)
			{
				nodes++;
				a = b->next;
			}

			return (nodes);
		}

		a = a->next;
		b = (b->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: a pointer to the address of the head of the listint_t list
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
		else
		{
			for (index = 0; index < nodes; index++)
			{
				temp = (*h)->next;
				free(*h);
				*h = temp;
			}

			*h = NULL;
		}

		h = NULL;
		return (nodes);
}
