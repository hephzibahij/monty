#include "monty.h"

/**
* f_pint - function that prints the top of the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_pint(stack_t **head, unsigned int counter)
{
	int top_value = (*head)->n;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", top_value);
}
