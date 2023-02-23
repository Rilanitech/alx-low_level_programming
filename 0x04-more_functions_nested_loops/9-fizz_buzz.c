#include "main.h"
#include <stdio.h>
/**
 * main - printsthe required numbers
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Bizz");
		} else if (i == 1)
		{
			printf("%d ", i);
		} else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
