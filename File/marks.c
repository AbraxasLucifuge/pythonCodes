#include <stdio.h>

int main() {
	float a,b,c,d,e,s;
	printf("Enter the scores of the student:\n");
	scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);

	s = a+b+c+d+e;
	printf("The sum of marks is %.2f and percentage obtained is %.2f\n", s, s/5);
	printf("The marks distribution is:\n");
	printf("1. %.2f\n", (a/s)*100);
	printf("2. %.2f\n", (b/s)*100);
	printf("3. %.2f\n", (c/s)*100);
	printf("4. %.2f\n", (d/s)*100);
	printf("5. %.2f\n", (e/s)*100);
	return 0;
}
