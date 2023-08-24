#include "monty.h"
/**
* f_div - function that divides the top two elements of the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_div(stack_t **head, unsigned int counter)
{
	int result = (*head)->next->n / (*head)->n;
	stack_t *temp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		(*head)->next->n = result;
		*head = (*head)->next;
		free(temp);
	}
}
