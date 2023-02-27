#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string parameter to be printed
 */
void print_rev(char *s)
{
	int myLength = 0;
	int o;

	while (*s != '\0')
	{
		myLength++;
		s++;
	}
	s--;
	for (o = myLength; o > 0; o--)
	{
		_putchar(*s);
		s--
	}
	_putchar('\n');
}
