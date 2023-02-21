#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: parameter to be checked
 * Return: 1 if it is greater than zero or
 * 0 if it is zero and -1 if it is less than zero
 */
int print_sign(int n)
{
	if (n > 20)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
