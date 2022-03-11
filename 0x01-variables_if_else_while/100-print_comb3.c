#include <stdio.h>

/**
 * main - prints all possible combinaisons of two digits numbers.
 * Description : using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i1, i2;

	for (i1 = 48; i1 <= 56; i1++)
	{
		for (i2 = 49; i2 <= 57; i2++)
			if (i2 > i1)
			{
				putchar(i1);
				putchar(i2);
				if (i1 != 56 || i2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
