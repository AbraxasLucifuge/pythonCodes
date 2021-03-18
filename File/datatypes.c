#include <stdio.h>

int main() {
	int a; char b; float c;
	printf("Enter character,integer,decimal: \n");
	scanf("%c %d %g", &b, &a, &c);
	
	printf("The character is: %c\n", b);
	printf("The integer is: %d\n", a);
	printf("The decimal is: %g\n", c);
}
