#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a = 2, b = -3, c = 1;
	double discriminant, x1, x2;
	discriminant = pow(b,2) - 4 * a * c;
	x1 = (-b + sqrt(discriminant)) / (2 * a);
	x2 = (-b - sqrt(discriminant)) / (2 * a);
	printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
	return 0;
}
