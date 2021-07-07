#include <bits/stdc++.h>

using namespace std;

void selectsort(int a[], int n) {
	for(int i=0; i<n; i++) {
		int mn = a[i], k = i;
		for(int j=i; j<n; j++) {
			if(a[j] < mn) k = j; 
		}
		swap(a[i], a[k]);
	}		
}

int main() {
 	cout << "Enter the size of array:\n";
	int n;
	cin >> n;
	cout << "Enter contents of array:\n";
	int a[n];
	for(int i=0; i<n; i++)
	cin >> a[i];
	selectsort(a,n);
	cout << "Sorted array:\n";
	for(int i=0; i<n; i++) cout << a[i] << " ";								
	cout << endl;
	return 0;
}
