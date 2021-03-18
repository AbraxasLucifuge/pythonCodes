#include <stdio.h>

int main() {
	int st,r;
	printf("Enter the number of rows: \n");
	scanf("%d", &r);
	printf("\n");
	for(int i=2; i<=r+1; i++) {
		for(int k = 0; k<=r+1-i; k++) {
			printf(" ");
		}
		st=1;
		for(int j=0; j<i-1; j++) {
			if(j)
				st = (st*(i-j-1))/j;
			printf("%d ", st);
		}
	       printf("\n");	
	}
	return 0;
}
