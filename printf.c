#include "main.h"
/**
 * _printf - printf function
 * @*format - pointer
 * Return: print_chars
 */
int _printf(const char *format, ...)
{
	int print_chars = 0;

	va_list arg;

	if (format == NULL)
	return (-1);

	va_start(arg, format);
	while (*format != '\0')
	{
	if (*format != '%')
	{
	write(1, format, 1);
	}
	format++;
	}
	if (*format == '\0')
	{
	return (0);
	}

	/**when the format is a character */
	else if (*format == 'c')
	{
	char c = va_arg(arg, int);
	write(1, &c, 1);
	print_chars++;
	}

	/**when the format is a string */
	else if (*format == 's')
	{
	char *str = va_arg(arg, char*);
	int str_len = 0;

	while (str[str_len] != '\0')
	str_len++;

	write(1, str, str_len);
	print_chars += str_len;
	}
	
	/** when the format is %% */
	if (*format == '%')
	{
	write(1, "%%", 1);
	}
	va_end(arg);

	return (print_chars);
}
