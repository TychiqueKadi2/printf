#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int _pchar(char c);
int _printf(const char *format, ...);
void print_bi(unsigned int uint);
int print_buf(const char *input);

#endif
