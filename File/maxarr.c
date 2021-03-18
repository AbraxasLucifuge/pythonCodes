#include <stdio.h>

int main() {
	int n,max,ind;
	printf("Enter the size of the array\n");
	scanf("%d", &n);

	int a[n];
	printf("Enter the contents of array:\n");
	for(int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	max = a[0];
	ind = 0;
	for(int i=0; i<n; i++) {
		if(a[i]>max) {
			max = a[i];
			ind = i;
		}	
	}

	printf("The maximum element of the array is %d at position %d\n", max, ind+1);
	return 0;
}
