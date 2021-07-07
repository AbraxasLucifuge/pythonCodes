#include <bits/stdc++.h>

using namespace std;

int binarysearch(int a[], int n, int k) {
	int h = n, l =0;
	while(h>l) {
		int mid = (h+l)/2;
		if(a[mid] >= k)
			h = mid;
		else
			l = mid+1;
	}
	if(a[h] == k)
		return h;
	return -1;
}

int main() {
	cout << "Enter the size of the array:\n";
	int n; cin >> n; int a[n];
	cout << "Enter the contents of the array:\n";
	for(int i=0; i<n; i++) cin >> a[i];
	cout << "Enter number to find:\n"; int k;
	cin >> k;
	int as = binarysearch(a, n, k);
	if(as == -1)
		cout << "Number is not present in array" << endl;
	else
		cout << "Number found at position " << as+1 << endl;
	return 0;
}
