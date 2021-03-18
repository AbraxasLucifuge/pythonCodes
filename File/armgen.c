#include <stdio.h>
#include <math.h>

int digits(int t) {
	int c = 0;
	while(t) {
		t/=10;
		c++;
	}
	return c;
}

int main() {
	FILE *fd;
	int tmp, cnt, r, a;
	fd = fopen("arm.txt", "a+");
	printf("The folllowing are the armstrong numbers from 1 to 5000: \n\n");
	for(int i=1; i<=5000; i++) {
		tmp = i; 
		a = 0;
		cnt = digits(i);
		while(tmp) {
			r = tmp%10;
			a += pow(r, cnt);
			tmp /= 10;	
		}
		if(i == a) {
			printf("%d\n", i);
			fprintf(fd, "%d\n", i);
		}	
	}
	fclose(fd);
	return 0;
}
