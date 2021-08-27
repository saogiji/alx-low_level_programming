#include <stdio.h>

/**
 * main - prints the lower case of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
		putchar(alpha);
		}
		putchar('\n');
	return (0);
	}
