#include "main.h"
/**
 * _print_rot13 - convert to rot13
 * @args: printf arguments
 * Return: count
 *
 */
int _print_rot13(va_list args)
{
	int a, b, count = 0;
	int c = 0;
	char *s = va_arg(args, char*);
	char az[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char nm[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		c = 0;
		for (b = 0; az[b] && !c; b++)
		{
			if (s[a] == az[b])
			{
				_pchar(nm[b]);
				count++;
				c = 1;
			}
		}
		if (!c)
		{
			_pchar(s[a]);
			count++;
		}
	}
	return (count);
}
