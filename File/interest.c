#include <stdio.h>
#include <math.h>
int main() {
	float p,t,r;
	float si,ci;
	printf("Enter the principal(p), rate of interest(r) and time period(t):\n");
	scanf("%f%f%f", &p,&t,&r);
	
	si = (p*r*t)/100;
	ci = (p*pow((1+(r/100)),t)) - p;

	printf("The simple interest on the given amount is: %f\n", si);
	printf("The compund interest on the given amount is: %f\n", ci);

	return 0;
}
