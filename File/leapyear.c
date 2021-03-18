#include <stdio.h>

int main() {
	int y;
	printf("Enter the year you want to check:\n");
	scanf("%d", &y);
	if(y%4 != 0)
		printf("The year is not a leap year.\n");
	else {
		if(y%100 != 0)
			printf("The year is a leap year\n");
		else if(y%400 != 0)
			printf("The year is not a leap year\n");
		else
			printf("The year is a leap year\n");
	}
	return 0;
}
