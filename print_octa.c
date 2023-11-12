#include "main.h"

/**
 * _print_octa - prints an octal number.
 * @val: arguments.
 * Return: count.
 */
int _print_octa(va_list val)
{
	int a;
	int *ary;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	ary = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		ary[a] = tem % 8;
		tem /= 8;
	}
	for (a = count - 1; a >= 0; a--)
	{
		_pchar(ary[a] + '0');
	}
	free(ary);
	return (count);
}
