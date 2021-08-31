#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int alpha;

	if (n < 0)
		n = -n;

	alpha = n % 10;

	if (alpha < 0)
		alpha = -alpha;

	_putchar(alpha + '0');

	return (alpha);
}
