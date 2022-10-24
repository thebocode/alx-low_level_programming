#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the address of the head of the listint_t list
 * @n: integer for new node to contain
 * Return: NULL if function fails, otherwise, address of the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);

	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
