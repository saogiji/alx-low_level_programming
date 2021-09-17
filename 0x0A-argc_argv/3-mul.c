#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers.
 *
 *@argc: number of arguments
 *
 *@argv: array of arguments.
 *
 *Return: (0) if no error.
 */

int main(int argc, char *argv[])
{
	int a, b, product;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;

		printf("%d\n", product);

		return (0);
	}
	printf("Error\n");
	return (1);
}
