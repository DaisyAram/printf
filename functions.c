#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...)
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

int main(0)
{
	char ch = 'A';
	char str[] = "Hello, World!";
	int num = 42;

	my_printf("Character: %c\n", ch);
	my_printf("String: %s\n", str);
	my_printf("Integer: %d\n", num);
	my_printf("Binary: %b\n", num);

	return 0;
}
