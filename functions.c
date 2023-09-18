#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);


	while (*format)
	{
	if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
	/* Handle 'd' and 'i' specifiers */
	int value = va_arg(args, int);

	printf("%d", value);

	format += 2; /* Move to the next format specifier */
	}
		else
	{
	/* Print regular characters */
	putchar(*format);
	format++;
	}
	}

	va_end(args);
}

int main(0)
{
	int num = 42;

	my_printf("This is a number: %d\n", num);
	return (0);
}
