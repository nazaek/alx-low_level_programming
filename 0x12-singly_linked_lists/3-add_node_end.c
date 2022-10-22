#include "lists.h"

/**
 * len - Calculates the length of a string.
 * @str: Constant string
 * Return: The length of the string
 */

int len(const char *str)
{
	int count;
if (str == NULL)
		return (0);
	for
 (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 *
 * @head: This is the input linked list
 * @str: This is the string take in my linked list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
