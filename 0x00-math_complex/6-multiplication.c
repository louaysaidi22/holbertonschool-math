#include "holberton.h"
/**
 * multiplication - function that performs
 * the multiplication operation to complex numbers.
 * @c1: struct complex.
 * @c2: struct complex.
 * @c3: struct complex.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	double a = c1.re;
	double b = c1.im;
	double c = c2.re;
	double d = c2.im;

	c3->re = a * c - b * d;
	c3->im = a * d + b * c;
}
