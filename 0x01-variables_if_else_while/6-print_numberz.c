#include <stdio.h>
/**
 * main - print decimal without char
 *
 * Return: (0)
 *
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
