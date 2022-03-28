#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: memory area to be copy
 * @dest: memory area receiving the copy
 * @n: number of bytes to copy
 * Description : using the _memcpy function
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
