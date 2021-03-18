#include <stdio.h>

int main() {
	int a,b;
	printf("Enter the 2 numbers: ");
	scanf("%d%d",&a,&b);

	if(a==b)
		printf("Input values are equal\n");
	else
		printf("Input values are not equal\n");
	return 0;
}
