#include <stdio.h>
/**
 * main - print decimal with, and space
 *
 * Return: (0)
 *
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);

		if (d <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
