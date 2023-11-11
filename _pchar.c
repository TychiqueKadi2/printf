#include "main.h"
/**
 * _pchar - prints a character
 * @c: input character
 * Return: 1
 */
int _pchar(char c)
{
	return (write(1, &c, 1));
}
