#include "main.h"
/**
 * _isupper - fuction that checks for uppercase character
 * @c: function parameter
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
