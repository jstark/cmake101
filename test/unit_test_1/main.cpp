#include <stdio.h>
#include "eqsolver.h"

int main(int argc, char *argv[])
{
	const int CASES = 4;
	const double COEFFS[CASES][7] = {
			{1, 2, 3, -1, 1.4142, -1, -1.4142},
			{1,-2,-3,  3, -1, 0, 0},
			{1,-5, 1, 4.7913, 0.20871, 0, 0},
			{1,-2, 1, 1, 1, 0, 0}};

	for (int i = 0; i < CASES; ++i)
	{
			int ret = 0;
			const double C[3] = {COEFFS[i][0], COEFFS[i][1], COEFFS[i][2]};
			double roots[4] = {0};
			const double (*pc)[3] = &C;
			double (*pr)[4] = &roots;
			ret = solve_quadratic_eq(pc, pr);
			printf("ret %d, roots %f %f %f %f\n", ret, COEFFS[i][3], COEFFS[i][4], COEFFS[i][5], COEFFS[i][6]);
	}
	return 0;
}
