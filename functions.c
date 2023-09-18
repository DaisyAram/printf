#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
	format++; /* Move past the '%' */
	switch (*format)
	{
	case 'd':
	case 'i':
	/* Handle 'd' and 'i' specifiers for integers */
	printf("%d", va_arg(args, int));
	break;
	case 'c':
		/* Handle 'c' specifier for characters */
		putchar(va_arg(args, int)); /* Use int for character */
		break;
	case 's':
		/* Handle 's' specifier for strings */
		fputs(va_arg(args, char*), stdout);
		break;
	case 'b':
	/* Handle 'b' specifier for binary representation of integers */
			{
		int num = va_arg(args, int);
		for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
		{
		putchar((num & (1 << i)) ? '1' : '0');
		}
	}
		break;
		default:
			/* Print any character following '%' */
		putchar('%');
		putchar(*format);
		break;
		}
	}
		else
	{
	/* Print regular characters */
	putchar(*format);
	}
	format++; /* Move to the next character in the format string */
	}

	va_end(args);
}

int main(void)
{
	int num = 42;

	_printf("Integer: %d\n", num);
	return 0;
}
