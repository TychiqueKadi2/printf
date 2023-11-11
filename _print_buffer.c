#include "main.h"
/**
 * print_buf - Use a local buffer of 1024 chars
 *  in order to call write as little as possible
 *  @input: string to print out using buffer
 *  Return: no. of bytes
 */
int print_buf(const char *input)
{
	static char buffer[BUFFER_SIZE];
	static int buffer_index = 0;
	int count = 0;

	while (*input != '\0')
	{
		buffer[buffer_index++] = *input;
		if (buffer_index == BUFFER_SIZE - 1)
		{
			buffer[buffer_index] = '\0';  /* flush buffer when its almost full */
			count += write(STDOUT_FILENO, buffer, buffer_index);
			buffer_index = 0;
		}
		input++;
	}
	return count;
}
