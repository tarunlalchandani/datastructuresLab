#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cout<<"Enter the length of array: "; cin>>n;
	int arr[100];
	cout<<"Enter the n elements of array: \n";
	for(int i=0; i<n; i++) cin>>arr[i];
	
	
	while(true) {
		bool isSorted = true;
		for(int i=0; i<n-1; i++) {
			if(arr[i] > arr[i+1]) {
				swap(arr[i], arr[i+1]); 
				isSorted = false;
			}	
			
		}
		if(isSorted) {
			break;
		}
		
	}
	
	cout<<"Sorted array is: \n";
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";


	return 0;
}

