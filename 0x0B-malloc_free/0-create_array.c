#include <stdlib.h>
#include "main.h"

/**
 * create_array - a program that creates a dynamic memory
 * allocation filled with a specific character c.
 * @size: size of an array
 * @c: character.
 * Return: pointer to the Array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	pointer = (char *) malloc(sizeof(char) * size);

	if (pointer == NULL)
		return (NULL);


	while (i < size)
	{
		*(pointer + i) = c;
		i++;
	}

	*(pointer + i) = '\0';

	return (pointer);
}
