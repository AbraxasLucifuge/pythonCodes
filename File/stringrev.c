#include <stdio.h>

int main() {
	int n;
	printf("Enter the length of string:\n");
	scanf("%d", &n);

	char s[n];
	int flag = 1;
	printf("Enter string:\n");
	scanf("%s", s);

	printf("Reversed string:\n");
	for(int i=n-1; i>=0; i--) {
		printf("%c", s[i]);
	}
	printf("\nPalindrome check: ");
	for(int i=0; i<n; i++) {
		if(s[i] != s[n-1-i]) {
			flag = 0;
			break;
		}
	}

	if(flag)
		printf("The string is a palindrome.\n");
	else
		printf("The string is not a palindrome.\n");
	return 0;
}
