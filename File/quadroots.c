#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c,r1,r2,d;
	printf("Enter the coefficients of equation(ax^2 + bx + c): \n");
	scanf("%f%f%f", &a, &b, &c);

	d = b*b - 4*a*c;
	if(d < 0)
		printf("No real roots exist\n");
	else {
		r1 = (-b + sqrt(d))/(2*a);
		r2 = (-b - sqrt(d))/(2*a);
		printf("The roots of the quadratic equation are: %.2f %.2f", r1, r2);
	}
	return 0;
}
