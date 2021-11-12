#include "holberton.h"
/**
 * addition - function that performs the addition operation to complex numbers.
 * @c1: struct complex.
 * @c2: struct complex.
 * @c3: struct complex.
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
