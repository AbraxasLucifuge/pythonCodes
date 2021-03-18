#include <stdio.h>

int main() {
	int t;
	printf("Enter the number you want to check:\n");
	scanf("%d", &t);
	if(t & 1)
		printf("The number is odd\n");
	else
		printf("The number is even\n");

	if(t>0)
		printf("\nThe number is positive\n");
	else if(t<0)
		printf("\nThe number is negative\n");
	else
		printf("\nThe number entered is 0\n");
	return 0;
}
