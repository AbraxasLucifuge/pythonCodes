#include <stdio.h>

void swap(int *a, int *b);
void bubsort(int arr[], int n);
void insertsort(int arr[], int n);

int main() {
	int n;
	printf("Enter the size of the array:\n");
	scanf("%d", &n);
	
	printf("Enter the contents of the array:\n");
	int a[n], b[n], c[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
		c[i] = a[i];
	}
	
	insertsort(b, n);
	bubsort(c,n);
	printf("Original array\n");
	for(int i=0; i<n; i++) {
		printf("%d ", a[i]);
	}

	printf("\nAfter bubble sort\n");
	for(int i=0; i<n; i++) {
		printf("%d ", b[i]);
	}

	printf("\nAfter insertion sort\n");
	for(int i=0; i<n; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");

	return 0;
}

void swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

void bubsort(int arr[], int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-1; j++) {
			if(arr[j]>arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}		
	}	
}

void insertsort(int arr[], int n) {
	for(int i=0; i<n; i++) {
		for(int j=i; j>=1; j--) {
			if(arr[j]<arr[j-1])
				swap(&arr[j],&arr[j-1]);
			else
				break;
		}
	}	
}
