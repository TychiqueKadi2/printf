#include "main.h"
/**
 * _print_string - print string.
 * @val: parameter.
 * Return: integer.
 */

int _print_string(va_list val)
{
	char *s;
	int a, len = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] < 32 || s[a] >= 127)
		{
			_pchar('\\');
			_pchar('x');
			len = len + 2;
			value = s[a];
			if (value < 16)
			{
				_pchar('0');
				len++;
			}
			len = len + _print_HEXA_ex(value);
		}
		else
		{
			_pchar(s[a]);
			len++;
		}
	}
	return (len);
}
