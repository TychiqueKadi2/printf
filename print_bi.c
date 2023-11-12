#include "main.h"

/**
 * _print_bi - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int _print_bi(va_list val)
{
	int flags = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int c;

	for (i = 0; i < 32; i++)
	{
		c = ((a << (31 - i)) & num);
		if (c >> (31 - i))
			flags = 1;
		if (flags)
		{
			b = c >> (31 - i);
			_pchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_pchar('0');
	}
	return (count);
}
