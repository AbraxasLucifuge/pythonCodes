#include <bits/stdc++.h>

using namespace std;

void insertsort(int a[], int n) {
	for(int i=1; i<n; i++) {
		int k = i;
		while(a[k] < a[k-1]) {
			swap(a[k], a[k-1]);
			k--;
		}
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
	insertsort(a,n);
	cout << "Sorted array:\n";
	for(int i=0; i<n; i++) cout << a[i] << " ";
	cout << endl;
	return 0;
}
