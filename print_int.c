#include "main.h"
/**
 * _print_i - prints integer
 * @args: argument to print
 * Return: integer
 */
int _print_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_pchar('_');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_pchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_pchar(last + '0');
	return (i);
}
/**
 * _print_d - prints decimal
 * @args: arguments
 * Return: count
 */
int _print_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_pchar('_');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_pchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_pchar(last + '0');
	return (i);
}
