#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the name of a program followed by a new line.
 *
 *@argv: argument vector.
 *
 *Return: Always (0) success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
