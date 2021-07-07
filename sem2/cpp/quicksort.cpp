#include <bits/stdc++.h>

using namespace std;

int divide(int a[], int l, int h) {
	int k = a[h];
	int i = l-1;
	for(int j=l; j<=h-1; j++) {
		if(a[j] < k) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[h]);
	return i+1;
}

void quicksort(int a[], int l, int h) {
	if(l < h) {
		int div = divide(a, l, h);
		quicksort(a, l, div-1);
		quicksort(a, div+1, h);
	}	
}

int main() {
	cout << "Enter the number of elements in the array:\n";
	int n;cin >> n;
	int a[n];
	cout << "Enter the elements of the array:\n";
	for(int i=0; i<n; i++) cin >> a[i];
	cout << "Sorted array:\n";
	quicksort(a,0,n-1);
	for(int i=0; i<n; i++) cout << a[i] << " ";
	cout << endl;
	return 0;
}
