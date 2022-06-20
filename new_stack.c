#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_stack_t - create a new stack element
 * @n: An integer
 *
 * Return: The new stack element
 */
stack_t *new_stack_t(int n)
{
	stack_t *e = malloc(sizeof(stack_t));

	if (e == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		die(EXIT_FAILURE);
	}

	e->n = n;
	e->prev = NULL;
	e->next = NULL;

	return (e);
}
