#include "main.h"

/**
 * print_pt - prints an pointer hexdecimal number
 * @val: arguments
 * Return: no. of bytes
 */
int print_pt(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_pchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_pchar('0');
	_pchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}
