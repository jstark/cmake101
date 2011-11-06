#include <stdio.h>
#include "eqsolver.h"

typedef int (*solve_fun)(const double (*c)[3], double (*r)[4]);
int main(int argc, char *argv[])
{

		solve_fun sf = solve_quadratic_eq;
		return 0;
}
