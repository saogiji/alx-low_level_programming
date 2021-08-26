#include <stdio.h>
#define PRINT6(Type) printf("Size of a " #Type ": %zu byte(s)\n", sizeof(Type))

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	PRINT6(char);
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	PRINT6(long int);
	PRINT6(long long int);
	PRINT6(float);
	return (0);
}
