#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using insertion sort
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = (*list)->next;
	listint_t *next_node;
	listint_t *current;
	listint_t *prev;
	listint_t *tmp;
	/* Parcourir la liste à partir du deuxième élément */
	while (node != NULL)
	{
		current = node;
		prev = current->prev;
		next_node = node->next;
		/* Déplacer le nœud tant qu'il est plus petit que le précédent */
		while (prev != NULL && current->n < prev->n)
		{
			tmp = prev->prev;/* Relier tmp à current si tmp existe */
			if (tmp != NULL)
			{
				tmp->next = current;
			}
			/* Mettre à jour le pointeur prev de current */
			current->prev = tmp;/* Détacher prev de current */
			prev->next = current->next;
			/* Mettre à jour le prev du nœud suivant si nécessaire */
			if (current->next != NULL)
			{
				current->next->prev = prev;
			}
			current->next = prev;/* Placer prev après current */
			prev->prev = current;
			/* Si current devient la tête de liste, mettre à jour *list */
			if (tmp == NULL)
			{
				*list = current; }
			/* Continuer la comparaison vers l'arrière */
			prev = current->prev;
			/* Afficher la liste après chaque échange */
			print_list(*list); }
		/* Passer au nœud suivant */
		node = next_node;
	}
}
