#include <stdio.h>
/**
 * main - The main function
 * Return: 0(Success)
 */
int main(void)
{	int i;
	int q;

	for (i = 0 ; i < 10 ; i++)
	{
		for (q = 1 ; q  < 10 ; q++)
		{
			if (i < q && i != q)
			{
				putchar(i + '0');
				putchar(q + '0');
				if (i + q != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
