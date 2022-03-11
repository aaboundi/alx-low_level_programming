#include <stdio.h>

/**
 * main - prints all possible combinaisons of two digits numbers (0-99).
 * Description : using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i1, i2;

	for (i1 = 0; i1 < 100; i1++)
	{
		for (i2 = 0; i2 < 100; i2++)
		{
			if (i2 > i1)
			{
				putchar((i1 / 10) + 48);
				putchar((i1 % 10) + 48);
				putchar(' ');
				putchar((i2 / 10) + 48);
				putchar((i2 % 10) + 48);
				if (i1 != 98 || i2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
