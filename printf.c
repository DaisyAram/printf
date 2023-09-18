#include "main.h"
/**
 * _printf - printf function
 * @*format: pointer format
 *
 * Return: print_chars
 */
int _printf(const char *format, ...)
{
	int print_chars = 0;
	va_list arg;

	if (format == NULL)
	return (-1);

	va_start(arg, format);
	/** when the format is not zero, while loop is incoporated */
	while (*format != '\0')
	{
	/** if the format does not have a placeholder "%"*/
	if (*format != '%')
	{
	write(1, format, 1);
	print_chars++;
	}
	else
	{
	format++;
	/** format equals to zero exit */
	if (*format == '\0')
	break;
	/** when the format has placeholder "%" */

	if (*format == '%')
	{
	write(1, "%%", 1);
	print_chars++;
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

	/** string length */
	while (str[str_len] != '\0')
	str_len++;

	write(1, str, str_len);
	print_chars += str_len;
	}
	}
	/** the while loop countinuea untill all variables are satisfied */
	format++;
	}
	va_end(arg);

	return (print_chars);
}
