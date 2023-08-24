#include "monty.h"

/**
* f_add - function that adds the top two elements of the stack
* @head: double pointer head to the stack
* @counter: line count
*
* Return: nothing
*/
void f_add(stack_t **head, unsigned int counter)
{
	int result = (*head)->n + (*head)->next->n;
	stack_t *temp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n = result;
	*head = (*head)->next;
	free(temp);
}
