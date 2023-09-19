#include "main.h"
void print_buffer(char buffer[], int *buff_ind)
/**
 * _printf - printf function
 * @format: format
 * Return: print_chars
 */
int _printf(const char *format, ...)
{
	int i, print_chars = 0, buff_ind = 0;

	va_list args;
	char buffer[BUFF_SIZE];
	
	if (format == NULL)
	return(-1);
	
	va_start(args, format);
	for( i = 0; format && format[i] != '\0'; i++)
	{
	if (format = '\0')/**if format is 0, break*/
	break;
	}
	/** when format has no placeholder '%'*/ 
	if(format[i] != '%')
	{
	buffer[buff_ind++] = format[i];
	if(buff_ind == BUFF_SIZE)
	print_buffer(buffer, &buff_ind);
	write(1, &format[i], 1);
	print_chars++;
	}
}
/**
 * print_buffer - prints the contents of the buffer
 * @buffer: Array of chars
 * @buff_ind: index at which to add next char
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
