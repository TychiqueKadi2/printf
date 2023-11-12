#include "main.h"

/**
 * _strlen - finds string length
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
		;
	return (len);

}

/**
 * _strlenc - finds string length for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
		;
	return (len);
}
