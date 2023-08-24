#include "monty.h"
/**
* f_mod - function that computes the remainder of the division of the second
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_mod(stack_t **head, unsigned int counter)
{
	int result = (*head)->next->n % (*head)->n;
	stack_t *temp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n = result;
	*head = (*head)->next;
	free(temp);
}
