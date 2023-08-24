#include "monty.h"
/**
* f_swap - function that swaps the top two elements of the stack
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	int temp = (*head)->n;
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	(*head)->n = (*head)->next->n;
	(*head)->next->n = temp;
}
