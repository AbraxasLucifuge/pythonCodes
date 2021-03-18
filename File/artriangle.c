#include <stdio.h>

int main() {
	float b,h;
	printf("Enter the height and base of the triangle:\n");
	scanf("%f%f", &b, &h);

	printf("The area of the triangle is %f\n", (b*h)/2);
	return 0;
}
