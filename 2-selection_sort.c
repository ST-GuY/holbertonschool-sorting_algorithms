#include "sort.h"

/**
 * selection_sort - Trie un tableau d'entiers en ordre croissant
 *                  en utilisant l'algorithme de tri par sélection
 * @array: Le tableau d'entiers à trier
 * @size: Le nombre d'éléments dans le tableau
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int tmp;

	/* Vérifie si le tableau est NULL ou a moins de deux éléments */
	if (!array || size < 2)
		return;

	/* Parcourt le tableau jusqu'à l'avant-dernier élément */
	for (i = 0; i < size - 1; i++)
	{
		/* Suppose que l'élément courant est le minimum */
		min_idx = i;

		/* Cherche l'index du plus petit élément restant dans le tableau */
		for (j = i + 1; j < size; j++)
		{
			/* Si un élément plus petit est trouvé, met à jour min_idx */
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		/* Si un plus petit élément a été trouvé, on effectue l'échange */
		if (min_idx != i)
		{
			/* Échange les éléments à l'index i et min_idx */
			tmp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = tmp;

			/* Affiche le tableau après l'échange */
			print_array(array, size);
		}
	}
}
