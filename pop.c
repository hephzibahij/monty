#include "monty.h"

/**
* f_pop - function that pops the top of the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *top = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	*head = top->next;
	free(top);
}
