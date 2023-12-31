#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */
typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int _print_point(va_list val);
int _print_uint(va_list args);
int _print_hexa_ex(unsigned long int num);
int _strlenc(const char *s);
int _print_HEXA_ex(unsigned int num);
int _print_string(va_list val);
int _print_HEXA(va_list val);
int _print_hexa(va_list val);
int _print_octa(va_list val);
int _print_bi(va_list val);
int _print_revs(va_list args);
int _print_rot13(va_list args);
int _print_i(va_list args);
int _print_d(va_list args);
int _strlen(char *s);
int _rev_string(char *s);
int _print_37(void);
int _print_c(va_list val);
int _print_s(va_list val);
int _pchar(char c);
int _printf(const char *format, ...);
int _printf_nflag(const char *formatt, ...);

#endif
