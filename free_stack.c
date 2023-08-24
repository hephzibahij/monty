#include "monty.h"

/**
 * free_stack - functions that frees a linked list
 * @head: pointer to the head stack
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
