#include "main.h"
/**
 * _print_point - prints a hexadecimal
 * @val:
 * Return: counter
 */
int _print_point(va_list val)
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
	y = _print_hexa_ex(x);
	return (y + 2);
}
