#include "main.h"

/* _printf_nflag - prints support for +, space, and # flag characters
 * @formatt: input
 * Return: count
 */
int _printf_nflag(const char *formatt, ...)
{
	int count = 0;

	va_list args;
	va_start(args, formatt);


	while (*formatt != '\0')
	{
		if (*formatt == '%' && (*(formatt + 1) == '+' || *(formatt + 1) == ' ' || *(formatt + 1) == '#'))
		{
			char flag = *(formatt + 1);
			formatt += 2;
			
			switch (*formatt)
			{
				case 'd':
				case 'i':
					{
						int value = va_arg(args, int);
						if (flag == '+')
						{
							if (value >= 0)
							{
								write(1, "+", 1);
								count++;
							}
						}
						else if (flag == ' ')
						{
							if (value >= 0)
							{
								write(1, " ", 1);
								count++;
							}
						}
						write(1, &value, sizeof(int));
						count += sizeof(int);
					}
					break;
				case 'x':
					{
						unsigned int value = va_arg(args, unsigned int);
						if (flag == '#')
						{
							write(1, "0x", 2);
							count += 2;
						}
						write(1, &value, sizeof(unsigned int));
						count += sizeof(unsigned int);
					}
					break;
				default:
					write(1, "Unsupported specifier\n", sizeof("Unsupported specifier\n") - 1);
			}
		}
		else
		{
			write(1, formatt, 1);
			count++;
            formatt++;
		}
	}
	va_end(args);
       	return count;
}
