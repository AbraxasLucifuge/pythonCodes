#include <stdio.h>

int solve(int t) {
	int a = 0, cnt, b;
	cnt = t;
	while(t) {
		b = t%10;
		a += (b*b*b);
		t/=10;
	}
	if(a == cnt)
		return 1;
	return 0;
}

int main() {
	int t;
	printf("Enter the number: \n");
	scanf("%d", &t);
	if(solve(t))
		printf("The number is an armstrong number\n");
	else
		printf("The number is not an armstrong number\n");
	return 0;
}
