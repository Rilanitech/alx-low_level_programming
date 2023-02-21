#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @i: function parameter
 * Return: r
 */
int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (i < 10)
		r = -r;
	_putchar(r + '0');
	return (r);
}
