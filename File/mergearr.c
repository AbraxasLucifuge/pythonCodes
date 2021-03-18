#include <stdio.h>

void merge(int r[], int a[], int b[], int n, int m);

int main() {
	int n,m;
	printf("Enter the size of the 2 arrays:\n");
	scanf("%d%d", &n, &m);
	
	int a[n], b[m], r[n+m];
	printf("Enter the contents of the arrays:\n");
	printf("Array 1: ");
	for(int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Array 2: ");
	for(int i=0; i<m; i++) {
		scanf("%d", &b[i]);
	}
	merge(r, a, b, n, m);
	for(int i=0; i<n+m; i++) {
		printf("%d ", r[i]);
	}
	printf("\n");
	return 0;
}

void merge(int r[], int a[], int b[], int n, int m) {
	for(int i=0; i<n; i++) {
		r[i] = a[i];
	}
	for(int i=0; i<m; i++) {
		r[i+n] = b[i];
	}
}

