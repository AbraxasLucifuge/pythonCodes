#include <stdio.h>
#define ll long long
int main() {
	int b,p;
	ll r;
	printf("Enter the base and power: \n");
	scanf("%d%d", &b, &p);

	r = 1;
	for(int i=0; i<p; i++) {
		r *= b;
	}
	printf("%d raised to the power of %d is: %lld\n", b, p, r);
	return 0;
}
