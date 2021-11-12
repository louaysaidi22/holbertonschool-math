#include "holberton.h"
/**
 * argument -  function that returns the argument of a given complex number.
 * @c: struct complex.
 * Return: argument of a complex number.
 */
double argument(complex c)
{
	double a = c.re;
	double b = c.im;
	double q;

	q = b / a;
		return (atan(q));
}
