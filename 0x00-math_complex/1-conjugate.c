#include "holberton.h"
/**
 * conjugate - function that returns the conjugate of a given complex number.
 * @c: struct complex.
 * Return: complex conjugate.
 */
complex conjugate(complex c)
{
	complex com;

	com.re = c.re;
	com.im = -c.im;
	return (com);
}
