#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort_list - Sorts list of integers in ascending order
 * @list: double pointer to head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *nodeToSort;
	listint_t *previousNode;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	nodeToSort = (*list)->next;
	while (nodeToSort != NULL)
	{
		previousNode = nodeToSort->prev;
		while (previousNode != NULL && previousNode->n > nodeToSort->n)
		{
			previousNode->next = nodeToSort->next;
			if (nodeToSort->next != NULL)
				nodeToSort->next->prev = previousNode;
			nodeToSort->next = previousNode;
			nodeToSort->prev = previousNode->prev;
			if (previousNode->prev != NULL)
				previousNode->prev->next = nodeToSort;
			else
				*list = nodeToSort;
			previousNode->prev = nodeToSort;
			previousNode = nodeToSort->prev;
			print_list(*list);
		}
		nodeToSort = nodeToSort->next;
	}
}
