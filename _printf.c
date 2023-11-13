#include "main.h"
/**
 * _printf - select the correct function to print
 * @format: identifier to look for
 * Return: length of string
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", _print_s}, {"%c", _print_c},
		{"%%", _print_37},
		{"%i", _print_i}, {"%d", _print_d}, {"%r", _print_revs},
		{"%R", _print_rot13}, {"%b", _print_bi},
		{"%u", _print_uint},
		{"%o", _print_octa}, {"%x", _print_hexa}, {"%X", _print_HEXA},
		{"%S", _print_string}, {"%p", _print_point}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_pchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
