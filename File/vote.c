#include <stdio.h>

int main() {
	int t;
	printf("Enter the age of the candidate:\n");
	scanf("%d", &t);

	if(t>=18)
		printf("The candidate is egligible to vote\n");
	else
		printf("The candidate is not egligible to vote\n");
	return 0;
}
