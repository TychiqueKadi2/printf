#include "main.h"
/**
 * _print_revs - prints a string in rev
 * @args: type struct va_arg
 * Return: string
 */
int _print_revs(va_list args)
{
	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_pchar(s[i]);
	return (j);
}
