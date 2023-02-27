#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string parameter
 * Return: Length
 */
int _strlen(char *s)
{
	int myString = 0;

	while (*s != '\0')
	{
		myString++;
		s++;
	}
	return (myString);
}
