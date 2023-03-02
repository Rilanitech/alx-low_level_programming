#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character
 * @c: The character to print
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
