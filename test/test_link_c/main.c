#include <stdio.h>
#include "eqsolver.h"

int main(int argc, char *argv[])
{
		typedef int (*solve_fun)(const double (*c)[3], double (*r)[4]);

		solve_fun sf = solve_quadratic_eq;
		return 0;
}
