#include <stdio.h>

int main() {
	int t, tmp, r, rev = 0;
	printf("Enter the number to be checked: \n");
	scanf("%d", &t);

	tmp = t;
	while(tmp) {
		r = tmp%10;
		rev = rev*10 + r;
		tmp/=10;
	}

	if(rev == t)
		printf("The number is a palindrome\n");
	else
		printf("The number is not a palindrome\n");

	return 0;
}
