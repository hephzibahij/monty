#include "monty.h"

/**
* f_mul - function that multiplies the top two elements of the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_mul(stack_t **head, unsigned int counter)
{
	int result = (*head)->n * (*head)->next->n;
	stack_t *temp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n = result;
	*head = (*head)->next;
	free(temp);
}
