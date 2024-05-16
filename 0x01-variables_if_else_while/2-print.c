#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: (0)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
