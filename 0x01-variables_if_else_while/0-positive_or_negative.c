#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more hearders goes there : done*/

/* betty style doc for function main goes there : done*/

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it.
 * Description : using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there : done */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
