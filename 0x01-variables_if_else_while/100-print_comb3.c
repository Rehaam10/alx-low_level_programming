#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
			}
		}
		c++;
	}
	d++;
	putchar('\n');
	return (0);
}
