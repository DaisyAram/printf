#include "main.h"
/**
 * _printf - printf function
 * @*format - pointer to a format
 * Return: print_chars
 */
int _printf(const char *format, ...)
{
	int print_chars = 0;

	va_list args;

	if (format == NULL)
	return (-1);

	va_start(args, format);
	while (*format != '\0')
	{
	if (*format != '%')
	{
	write (1, format, 1);
	}
	format++;
	}
	va_end(args);

	return (print_chars);
}
