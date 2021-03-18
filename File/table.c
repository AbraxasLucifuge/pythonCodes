#include <stdio.h>

int main() {
	int t;
	printf("Enter the number: \n");
	scanf("%d", &t);
	for(int i=1; i<=10; i++) {
		printf("%d ", t*i);
	}
	printf("\n");
	return 0;
}
