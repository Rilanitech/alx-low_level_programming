#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{	char i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
