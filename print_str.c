#include "main.h"
/**
 * _print_s - print a string
 * @val: argument
 * Return: length of string
 */
int _print_s(va_list val)
{
	char *s;
	int, len;

	s = va_arg(val, char*);

	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len; i++)
			_pchar (s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_pchar(s[i]);
		return (len);
	}
}
