#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Description : using the rev_string function
 */
void rev_string(char *s)
{
	int i, j, k;
	char c;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		c = s[j];
		s[j] = s[k];
		s[k--] = c;
	}
}
