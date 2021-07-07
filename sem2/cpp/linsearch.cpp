#include <bits/stdc++.h>

using namespace std;

int linsearch(int a[], int n, int k) {
	for(int i=0; i<n; i++) {
		if(a[i] == k) {
			return i;
		}
	}
	return -1;
}

int main() {
	cout << "Enter the size of the array:\n";
	int n; cin >> n; int a[n];
	cout << "Enter the contents of the array:\n";
	for(int i=0; i<n; i++) cin >> a[i];
	cout << "Enter the number to find:\n";
	int k; cin >> k;
	int as = linsearch(a, n, k);
	if(as == -1)
		cout << "Number not found in array" << endl;
	else
		cout << "Number found at position " << as+1 << endl; 
	return 0;
}
