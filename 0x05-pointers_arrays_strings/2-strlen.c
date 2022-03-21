#include "main.h"

/**
 * _strlen - returns the lengh of a string
 * @s: string to evaluate
 * Description : using the _strlen function
 * Return: the lengh of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
