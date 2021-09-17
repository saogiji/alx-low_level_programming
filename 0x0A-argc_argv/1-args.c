#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the number of argument passed into a program.
 *
 *@argc: argument count.
 *
 *@argv: array of arguments.
 *
 *Return: Always (0) success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
