#include <stdio.h>

int main() {
	int a,b,c;
	printf("Enter the numbers a and b: \n");
	scanf("%d%d", &a,&b);
	printf("The input value of a is %d and b is %d\n", a,b);

	c=a; a=b; b=c;

	printf("The swapped value of a is %d and b is %d\n", a,b);
	return 0;
}
