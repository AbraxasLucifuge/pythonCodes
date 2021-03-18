#include <stdio.h>
#include <math.h>
int prime(int t);

int main() {
	int n;
	printf("Enter the desired number:\n");
	scanf("%d", &n);

	printf("The primes numbers upto %d are: ",n);
	for(int i=2; i<n; i++) {
		if(prime(i))
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}

int prime(int r) {
	if(r==2)
		return 1;
	for(int i=2; i<=sqrt(r); i++) {
		if(r%i == 0)
			return 0;
	}
	return 1;
}
