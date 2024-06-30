# include "sort.h"
#include <stdio.h>
/**
  * insertion_sort_list- insertion sorting algo
  *@list: doubly liste
  *Return: void
  */
void insertion_sort_list(listint_t **list)
{	listint_t *head = malloc(sizeof(listint_t));
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *next = malloc(sizeof(listint_t));
	listint_t *prev = malloc(sizeof(listint_t));
	listint_t *actual = malloc(sizeof(listint_t));

	if (list || (*list)->next)
	{	node = (*list)->next;
	head = *list;
	prev = head->prev;
	next = node->next; }
	while (node)
	{	actual = next;
		while (head && node)
		{
			if (node->n < head->n)
			{
				if (prev != NULL)
					prev->next = node;
				node->prev = prev;
				node->next = head;
				head->prev = node;
				head->next = next;
				if (next != NULL)
					next->prev = head;
				if (prev == NULL)
					*list = node;
				print_list(*list);
				head = prev;
				if (prev)
					prev = head->prev;
				if (node)
					next = node->next; }
			else
				break; }
		node = actual;
		if (node)
			head = node->prev;
		if (head)
			prev = head->prev;
		if (node != NULL)
			next = node->next; } }
