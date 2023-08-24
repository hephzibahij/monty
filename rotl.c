#include "monty.h"

/**
 * f_rotl - function that rotates the stack to the top
 * @head: head node
 * @counter: line int
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *first = *head;
	stack_t *second = (*head)->next;

	if (*head == NULL || (*head)->next == NULL)
		return;
	second->prev = NULL;

	while (first->next != NULL)
	{
		first = first->next;
	}
	first->next = *head;
	(*head)->next = NULL;
	(*head)->prev = first;
	(*head) = second;
}
