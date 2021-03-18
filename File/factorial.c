#include <stdio.h>
#define ll long long
int main() {
	int t;
	ll f;
	printf("Enter the number:\n");
	scanf("%d", &t);

	f=1;
	for(int i=1; i<=t; i++) {
		f *= i;		
	}
	printf("The factorial of the %d is: %lld\n", t, f);
	return 0;
}
