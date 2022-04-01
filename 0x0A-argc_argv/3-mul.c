#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - write a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
	printf("Error\n");
	}
	return (1);
}
