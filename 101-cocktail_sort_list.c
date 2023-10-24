#include "sort.h"
#include <stdio.h>
/**
 *swap_nodes - swap two nodes in a doubly linked list
 *@node: node
 *@list: node list
 *Return: void
*/
void swap_nodes(listint_t **list, listint_t *left, listint_t *right) {
	if (left->prev)
		left->prev->next = right;
	if (right->next)
		right->next->prev = left;
	left->next = right->next;
	right->prev = left->prev;
	left->prev = right;
	right->next = left;
	if (*list == left)
		*list = right;
}
/**
 *cocktail_sort_list - this is a cocktail-sort implementation
 *working on doubly linked lists
 *@list: list
*/
void cocktail_sort_list(listint_t **list) {
	int swapped;

	listint_t *start = NULL;
	listint_t *end = NULL;
	listint_t *curr = NULL;
	if (!list || !(*list) || !(*list)->next)
		return;
	do {
		swapped = 0;
		curr = start = *list;
		while (curr->next != end) 
		{
			if (curr->n > curr->next->n)
			{
				swap_nodes(list, curr, curr->next);
				swapped = 1;
				print_list(*list);
			}
			else
				curr = curr->next;
		}
	        if (!swapped)
	            	break;
	        swapped = 0;
	        end = curr;
	        while (curr->prev != start) {
			if (curr->n < curr->prev->n) {
				swap_nodes(list, curr->prev, curr);
				swapped = 1;
				print_list(*list);
			}
			else
				curr = curr->prev;
		}
	} while (swapped);
}
