# include "sort.h"
/**
  * insertion_sort_list- insertion sorting algo
  *@list: doubly liste
  *Return: void
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = malloc(sizeof(list));
	listint_t *inserted = malloc(sizeof(list));
	listint_t *head = malloc(sizeof(list));
	inserted = (*list);
	node = (*list)->next;
	head = *list;

	while (node)
	{
		while (node->n < (*list)->n)

	}
	{
		while ((*list)->prev)
		{
			if (node->n < (*list)->n)
			{
				(*list) = (*list)->prev;
				
			}
			else
				break;
		}
		if (node->n < (*list)->n)
		{
			temp->next = node->next;
			temp->next->prev = temp;
			node->prev = (*list)->prev;
			node->next = (*list);
			(*list)->prev = node;
			if ((*list)->prev != NULL)
				head = node;
		}
		else
		{

		}
		else
		{
			temp = temp->next;
			node = node->next;
		}
		print_list(head);
		*list = temp;
		node = (*list)->next;
	}
	print_list(head);
}
