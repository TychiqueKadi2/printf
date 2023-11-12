#include "main.h"
/**
 * _print_hexa - prints a hexadecimal number
 * @val: arguments
 * Return: count
 */
int _print_hexa(va_list val)
{
	int a;
	int *ary;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	ary = malloc(count * sizeof(int));
	
	for (a = 0; a < count; a++)
	{
		ary[a] = tem % 16;
		tem /= 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (ary[a] > 9)
			ary[a] = ary[a] + 39;
		_pchar(ary[a] + '0');
	}
	free(ary);
	return (count);
}
