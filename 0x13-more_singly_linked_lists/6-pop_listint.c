#include "lists.h"

/**
 * pop_listint - function that eletes the head node of a listint_t list
 * @head: pointer to the address of the head of the listint_t list
 * Return: 0 if linked list is empty, otherwise, the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}
