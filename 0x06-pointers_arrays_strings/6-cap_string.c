#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to be capitalized
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 'a' - 'A';
	}

	index = 1;

	while (str[index])
	{
	if ((str[index] >= 'a' && str[index] <= 'z') && (
		str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}'))
	{
	str[index] -= 'a' - 'A';
	}
	index++;
	}
	return (str);
}
