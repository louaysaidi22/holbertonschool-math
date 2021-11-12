#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
/**
 * struct complex - complex number
 * @re: real part
 * @im: imaginary part
 */
typedef struct complex
{
double re;
double im;
} complex;
void display_complex_number(complex c);
#endif
