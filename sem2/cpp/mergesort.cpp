#include <bits/stdc++.h>

using namespace std;

void merge(int a[],int l,int m,int r) {
	int L[m-l+1], R[r-m];
	for(int i=l; i<=m; i++)
		L[i-l] = a[i];
	for(int i=m+1; i<=r; i++)
		R[i-m-1] = a[i];
	int ln = m-l+1, rn = r-m, i=0, j=0, k=l;
	while(i<ln && j<rn) {
		if(L[i] > R[j]) {
			a[k] = R[j];
			j++;
		}
		else {
			a[k] = L[i];
			i++;
		}
		k++;
	}
	while(i < ln) {
		a[k] = L[i]; i++; k++;
	}
	while(j < rn) {
		a[k] = R[j]; j++; k++;
	}
}

void mergesort(int a[],int l,int r) {
	if(l >= r)
		return;
	int mid = (l+r)/2;
	mergesort(a, l, mid);
	mergesort(a, mid+1, r);
	merge(a, l, mid, r);
}

int main() {
	cout << "Enter the siize of the array:\n";
	int n;cin >> n;
	cout << "Enter the contents of the array:\n";
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	mergesort(a, 0, n-1);
	cout << "Sorted array:\n";
	for(int i=0; i<n; i++) cout << a[i] << " ";
	cout << endl;
	return 0;
}
