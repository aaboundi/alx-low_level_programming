#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to check
 * @c: character to found
 * Description : using the _strchr function
 * Return: a pointer to the first occurence of the character
 * c in the string, or null if the character is not found
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		s++;
		if (*s == c)
			return (s);
	}

	return (0);
}
