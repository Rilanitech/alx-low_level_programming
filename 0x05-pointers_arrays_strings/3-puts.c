#include "main.h"
/**
 * _puts - prints a strings
 * @str: String parameter to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
