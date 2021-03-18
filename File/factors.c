#include <stdio.h>
#include <math.h>
int main() {
	int t, tmp;
	printf("Enter the number: \n");
	scanf("%d", &t);
	tmp = sqrt(t);
	for(int i = 1; i<=tmp; i++) {
		if(t%i == 0) {
			if(i == tmp)
				printf("%d", i);
			else
				printf("%d %d ", i, t/i);
		}
	}
	printf("\n");
	return 0;
}
