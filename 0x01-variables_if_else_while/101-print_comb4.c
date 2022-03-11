#include <stdio.h>

/**
 * main - prints all possible combinaisons of three digits numbers.
 * Description : using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i1, i2, i3;

	for (i1 = 48; i1 < 58; i1++)
	{
		for (i2 = 49; i2 < 58; i2++)
		{
			for (i3 = 50; i3 < 58; i3++)
			{
				if (i3 > i2 && i2 > i1)
				{
					putchar(i1);
					putchar(i2);
					putchar(i3);
					if (i1 != 55 || i2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
