#include <stdio.h>

enum week{sun, mon, tue, wed, thu, fri, sat};

int main() {
	int m;
	enum week day;
	day = mon;
	printf("S  M  T  W  T  F  S\n");
	printf("   ");
	for(int i=1; i<=28; i++) {
		if(i>=10)
			printf("%d ", i);
		else
			printf("%d  ", i);
		day = (day+1)%7;
		if(day == 0)
			printf("\n");
	}
	printf("\n");
	return 0;
}
