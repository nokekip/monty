nclude "monty.h"

/**
 *
 *  * _push_to_stack - pushes an element to the stack.
 *
 *   * @value: Value to add to the node
 *
 *    * @actual_head: address of the head
 *
 *     *
 *
 *      */



void _push_to_stack(stack_t **actual_head, unsigned int value)

{

		stack_t *new_node;

			stack_t *current = *actual_head;

				new_node = malloc(sizeof(stack_t));

					if (new_node == NULL)

								error_function(4, NULL, value);

						new_node->n = value;

							new_node->next = *actual_head;

								new_node->prev = NULL;

									if (current != NULL)

												current->prev = new_node;

										head = new_node;

}

/**
 *
 *  * _print_all_stack - pushes an element to the stack.
 *
 *   * @line_number: line number with the command
 *
 *    * @actual_head: address of the head
 *
 *     *
 *
 *      */

void _print_all_stack(stack_t **actual_head, unsigned int line_number)
