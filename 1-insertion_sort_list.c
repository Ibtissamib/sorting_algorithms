# include "sort.h"
#include <stdio.h>
/**
  * insertion_sort_list- insertion sorting algo
  *@list: doubly liste
  *Return: void
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = malloc(sizeof(listint_t));
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *next = malloc(sizeof(listint_t));
	listint_t *prev = malloc(sizeof(listint_t));
	listint_t *comp = malloc(sizeof(listint_t));
	comp = (*list)->next;
	while (comp->next)
	{
		while (head)
		{
			if( node->n < head->n)
			{
				if (prev != NULL)
					prev->next = node;
				node->prev = prev;
				node->next = head;
				head->prev = node;
				head->next = next;
				if ( next != NULL)
					next->prev = head;
				if (prev == NULL)
					*list = node;
				print_list(*list);
				head = prev;
				if (prev)
					prev = head->prev;
				next = node->next;
			}
			else
				break;

		}
		comp = comp->next;
		node = comp;
		head = node->prev;
		prev = head->prev;
		next = node->next;
	}
}
