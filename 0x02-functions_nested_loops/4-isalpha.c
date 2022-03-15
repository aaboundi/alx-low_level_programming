#include "main.h"

/**
 * _isalpha - check for alphabetic character c
 * @c: The character to check
 *Description : using the _islower function
 * Return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
