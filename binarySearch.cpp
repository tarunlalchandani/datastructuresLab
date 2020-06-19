#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int el, int i, int j) {
	int mid = (i+j)/2;
	
	if(arr[mid] == el) return true;
	else if(i==j) return false;
	else if(arr[mid] > el) {
		return binarySearch(arr, el, i, mid-1);
	}
	else if(arr[mid]<el) {
		return binarySearch(arr, el, mid+1, j);
	}
	
}



int main() {
	int n; cout<<"Enter the length of array: "; cin>>n;
	int arr[100];
	cout<<"Enter the n elements of array: \n";
	for(int i=0; i<n; i++) cin>>arr[i];
	
	while (true) {
		cout<<"\nEnter the element to be searched: (-1 to discontinue)\n";
		int el; cin>>el;  if(el==-1) break;
		if(binarySearch(arr, el, 0, n)) {
			cout<<"Found!";
		}
		else {
			cout<<"Not Found";
		}		
	}
	

	return 0;
}

