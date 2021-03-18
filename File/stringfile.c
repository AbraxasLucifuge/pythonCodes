#include <stdio.h>

int main() {
	int n;
	printf("Enter the length of the string:\n");
	scanf("%d", &n);

	char a[n], b[n];
	FILE *fd;

	printf("Enter the string:\n");
	scanf("%s", a);
	for(int i=n-1; i>=0; i--) {
		b[n-1-i] = a[i];
	}
	
	fd = fopen("stfile.txt", "a+");
	fprintf(fd, "String: %s , Reversed string: %s \n", a, b);
	fclose(fd);
	return 0;
}
