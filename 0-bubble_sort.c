#include "sort.h"

/**
 * bubble_sort - Trie un tableau d'entiers en ordre croissant
 *               en utilisant l'algorithme du tri à bulles.
 * @array: Pointeur vers le tableau d'entiers à trier.
 * @size: Nombre d'éléments dans le tableau.
 *
 * Description: Après chaque échange de deux éléments,
 *              le tableau est imprimé (à ajouter).
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;/* Déclaration des variables pour la boucle et l'échange */
	int tmp; /* variable temporaire */

	/* Parcours du tableau plusieurs fois */
	for (i = 0; i < size; i++)
	{
		/* Comparaison des éléments adjacents du tableau */
		for (j = size - 1; j > i; j--)
		{
			/* Si les éléments ne sont pas dans le bon ordre, on les échange */
			if (array[j] < array[j - 1])
			{
				/* Échange des deux éléments */
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;

				/* Impression du tableau après chaque échange (à ajouter ici) */
				print_array(array, size);
			}
		}
	}
}
