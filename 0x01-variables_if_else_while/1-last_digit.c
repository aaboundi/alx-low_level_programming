#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more hearders goes there : done*/

/* betty style doc for function main goes there : done*/

/**
 * main - prints the last digit of the
 * number stored in the variable n
 * Description : using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there : done */
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf(" and is greater than 5\n");
	else if (n % 10 == 0)
		printf(" and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf(" and is less than 6 and not 0\n");
	return (0);
}
