#include "holberton.h"
/**
 * modulus - function that returns the modulus of a given complex number.
 * @c: struct complex.
 * Return: modulus of a complex number
 */
double modulus(complex c)
{
	double a, b, l, s;

	a = c.re * c.re;
	b = c.im * c.im;
	l = a + b;
	s = sqrt(l);
	return (s);
}
