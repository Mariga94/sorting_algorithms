#include "sort.h"

/**
 * swap - exchange values
 * @x: value x
 * @y: value y
 *
 * Return: nothing
 */

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp
}

/**
 * getCount - calculate the length of list
 * @list: double linked list
 *
 * Return: length of linked list
 */
int getCount(listint_t **list)
{
	int count = 0;

	listint_t *current = list;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return count;
}

/**
 * insertion_sort_list - insert node
 * @list: list to be inserted
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	
}

	
