#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int *mem;
	int i, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;

	mem = malloc(sizeof(int) * l);

	if (mem == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		mem[i - min] = i;

	return (mem);
}
