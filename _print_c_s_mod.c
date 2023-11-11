#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format specifier
 * Return: no. of bytes
 */
int _printf(const char *format, ...)
{
	int count = 0; /* store the no. of characters printed */

	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++; /* moves past the '%' */
			if (*format == 'c')
			{
				count += _pchar(va_arg(args, int));
			}
			else if (*format == 's')
			{
				const char *str = va_arg(args, const char *);
				while (*str != '\0')
				{
					count += _pchar(*str);
					str++;
				}
			}
			else if (*format == '%')
			{
				count += _pchar('%');
			}
			else
			{
				count += _pchar('%'); /* treat unkown specifeir as '%' */
				count += _pchar(*format);
			}
		}
		else
		{
			count += _pchar(*format);
		}
		format++; /* moves to the next character in string */
	}
	va_end(args);
	return (count);
}
