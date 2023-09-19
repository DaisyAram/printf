#include "main.h"
/**
 * print_int: prints integer
 *
 * Return: printed_chars
 */

void print_int(const char *format, ...)
{
	va_list args;
	int i;
	int print_chars = 0;

	va_start(args, format);
	while (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
	{
	if (*format == '%')/** if the format has a placeholder '%' */
	print_chars++; /* Move to the next character */
	switch (*format)
	{
	case 'd':
	i = va_arg(args, int);
	write(1, &i, 1); /** print the 'd' associated with '%' */
	print_chars++;/** move to the next char */
	break;
	}
	}
	if (*format != 'd')
	write(1, format, 1);
	else /** if format does not have '%'*/
	{
	write(1, format, 1);
	print_chars++;/** move to the next character */
	format++;
	}
	va_end(args);
}
