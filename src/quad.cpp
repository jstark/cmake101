#include "eqsolver.h"
#include <cmath>

const double zero_tol = 1.0e-06;

static double discriminant(const double (*coeffs)[3])
{
	return (*coeffs)[1] * (*coeffs)[1] - 4.0 * (*coeffs)[0] * (*coeffs)[2];
}

int solve_quadratic_eq(const double (*coeffs)[3], double (*roots)[4])
{
	// find discriminant and then calculate roots
	double d = discriminant(coeffs);
	
	int retCode = 0;
	if (d > zero_tol) // two real roots
	{
		double d1 = (-(*coeffs)[1]+sqrt(d))/(2.0* (*coeffs)[0]);
		double d2 = (-(*coeffs)[1]-sqrt(d))/(2.0* (*coeffs)[0]);
		(*roots)[0] = d1;
		(*roots)[1] = d2;
	} else if (d < -zero_tol) // complex roots
	{
		double r = (-(*coeffs)[1])/(2.0*(*coeffs)[0]);
		double w = (sqrt(d)/(2.0*(*coeffs)[0]));
		(*roots)[0] = r;
		(*roots)[1] = w; // first root is x1 = r + iw, real part is roots[0], imaginary is roots[1]
		(*roots)[2] = r;
		(*roots)[3] = -w; // second root is x2 = r - iw, real part is roots[2], imaginary is roots[2]
		retCode = 1;
	} else // two identical real roots
	{
		double r = (-(*coeffs)[1])/(2.0*(*coeffs)[0]);
		(*roots)[0] = r;
		(*roots)[1] = r;
	}
	return retCode;
}
