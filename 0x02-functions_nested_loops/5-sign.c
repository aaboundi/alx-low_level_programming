#include "main.h"

/**
 * print_sign - check for alphabetic number n
 * @n: The character to check
 *Description : using the print_sign function
 *Return: 1 if n is greather than zero, 0 if n is zero,
 *-1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
