#include <stdio.h>

int main() {
	char c;
	printf("Enter the character: \n");
	scanf("%c", &c);
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		printf("The character is a vowel\n");
	else
		printf("The character is a consonent\n");	
	return 0;
}
