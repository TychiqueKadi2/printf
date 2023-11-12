#include "main.h"
/**
 * print_s - print a string.
 * @val: argument.
 * Return: the length of the string.
 */

int _print_s(va_list val)
{
	char *s;
	int a, l;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		l = _strlen(s);
		for (a = 0; a < l; a++)
			_pchar(s[a]);
		return (l);
	}
	else
	{
		l = _strlen(s);
		for (a = 0; a < l; a++)
			_pchar(s[a]);
		return (l);
	}
}
