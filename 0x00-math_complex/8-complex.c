#include "holberton.h"
/**
 * complex_from_mod_arg -  function that update the real and
 * the imaginary parts of a complex number given its modulus and arguments.
 * @m: modulus of complex number.
 * @arg: argument of complex number.
 * @c3: struct complex..
*/
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
