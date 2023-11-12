#include "main.h"
/**
 * _print_hexa - prints a hexadecimal number
 * @val: arguments
 * Return: count
 */
int _print_hexa(va_list val)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	
	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_pchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
