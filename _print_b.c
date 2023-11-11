#include "main.h"
/**
 * print_bi - unsigned int argument is converted to binary
 * @ui: unsigned int to convert
 * Return: no. of bytes
 */
void print_bi(unsigned int uint)
{
	if (uint > 1)
	{
		print_bi(uint / 2);
	}
	_pchar('0' + uint % 2);
}
