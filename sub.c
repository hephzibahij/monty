#include "monty.h"

/**
* f_sub - function that substracts nodes
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_sub(stack_t **head, unsigned int counter)
{
	int sub = (*head)->next->n - (*head)->n;
	int stack_size = 0;
	stack_t *temp = *head;

	temp = *head;

	while (temp != NULL)
	{
		stack_size++;
		temp = temp->next;
	}
	if (stack_size < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}
