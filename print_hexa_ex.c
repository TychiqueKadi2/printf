#include "main.h"

/**
 * _print_hexa_ex - prints extra x hexadecimal number.
 * @num: arguments.
 * Return: counter.
 */
int _print_hexa_ex(unsigned long int num)
{
	long int a;
	long int *ary;
	long int count = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	ary = malloc(count * sizeof(long int));

	for (a = 0; a < count; a++)
	{
		ary[a] = temp % 16;
		temp = temp / 16;
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
