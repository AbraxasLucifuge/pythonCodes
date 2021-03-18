#include <stdio.h>
#define pi 3.14
float area(float *r);
float perm(float *r);

int main() {
	float r, *p;
	printf("Enter the radius of the circle:\n");
	scanf("%f", &r);
	
	p = &r;
	printf("The area of the circle is %.2f\n", area(p));
	printf("The perimeter of the circle is %.2f\n", perm(p));
	return 0;
}

float area(float *r) {
	return (*r)*(*r)*pi;
}

float perm(float *r) {
	return 2 * pi * (*r);
}
