#include <stdio.h>

char *stringcat(char r[], char a[], char b[], int n, int m);

int main() {
	int a,b;
	printf("Enter the size of the two strings: \n");
	scanf("%d%d", &a, &b);

	char s[a], t[b], r[a+b];
	printf("Enter first string: \n");
	scanf("%s", s);
	printf("Enter the second string: \n");
	scanf("%s", t);

	char *p = stringcat(r, s, t, a, b);
	for(int i=0; i<a+b; i++) {
		printf("%c", *p);
		p++;
	}
	printf("\n");

	return 0; 
}

char *stringcat(char r[], char a[], char b[], int n, int m) {
	for(int i=0; i<n; i++)
		r[i] = a[i];
	for(int i=0; i<m; i++) 
		r[i+n] = b[i];

	return &r[0];
} 
