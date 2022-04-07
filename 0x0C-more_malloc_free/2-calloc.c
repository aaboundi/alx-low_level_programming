#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function to allocates memory for an array.
 * @nmemb: Number of the array elements.
 * @size: the size of elements on the Array.
 * Return: void pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}