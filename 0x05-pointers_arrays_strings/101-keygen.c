#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwards for 101-crackme
 * Return: always 0 (success)
**/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	putchar('\n');

	return (0);
}
