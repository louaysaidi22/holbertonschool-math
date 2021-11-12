#include "holberton.h"
/**
 * display_complex_number - function that displays
 * the complex numbers, followed by a new line.
 * @c: struct complex.
 */
void display_complex_number(complex c)
{
	double a = c.re;
	double b = c.im;

	if (a == 0 && b == 0)
		printf("0\n");
	else if (b == 0)
		printf("%g\n", a);
	else if (a == 0)
	{
		if (b == 1)
			printf("i\n");
		else if (b == -1)
			printf("-i\n");
		else
			printf("%gi\n", b);
	}
	else if (b > 0)
	{
		if (b == 1)
			printf("%g + i\n", a);
		else
			printf("%g + %gi\n", a, b);
	}
	else if (b < 0)
	{
		if (b == -1)
			printf("%g - i\n", a);
		else
			printf("%g - %gi\n", a, -b);
	}

}
