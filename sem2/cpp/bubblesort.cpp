#include <bits/stdc++.h>

using namespace std;

void bubblesort(int a[], int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-1; j++) {
			if(a[j] > a[j+1])
				swap(a[j], a[j+1]);
		}
	}
}

int main() {
	printf("Enter the size of the array:\n");
	int n; scanf("%d", &n);
	printf("Enter contents of array:\n"); int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	bubblesort(a, n);
	printf("Sorted array:\n");
	for(int i=0; i<n; i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}
