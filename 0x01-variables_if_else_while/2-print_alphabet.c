#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Description : using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
