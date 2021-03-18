#include <stdio.h>

int main() {
	int t,s,r,temp;
	printf("Enter the number of terms of fibonacci series:\n");
	scanf("%d", &t);
	
	s = 1;
	r = 0;
	for(int i=0; i<t; i++) {
		printf("%d ",s);
		temp = s;
		s += r;
		r = temp;	
	}
	printf("\n");
	return 0;
}
