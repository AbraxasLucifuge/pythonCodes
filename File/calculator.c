#include <stdio.h>

int main() {
	char c;
	float a,b;
	printf("Enter the operator(*, +, -, /): \n");
	scanf("%c", &c);
	printf("Enter the numbers: \n");
	scanf("%f%f", &a, &b);

	switch (c) {
		case '+':
			printf("The sum of the numbers is: %g\n", a+b);
			break;
		case '-':
			printf("The difference of the numbers is: %g\n", a-b);
			break;
		case '*':
			printf("The product of the numbers is: %g\n", a*b);
			break;
		case '/':
			printf("The division os the 2 numbers yields %g\n", a/b);
			break;
	}
	return 0;	
}
