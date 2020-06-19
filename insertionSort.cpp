#include<bits/stdc++.h>
using namespace std;
//insertion sort

void inputArr(int arr[], int n) {
	 for (int i=0; i<n; i++) {
	 	 cout<<"arr["<<i<<"] = ";
		 cin>>arr[i];
		 cout<<'\n';
	 }
}

void outputArr(int arr[], int n) {
	 for (int i=0; i<n; i++) {
	 	 cout<<arr[i]<<' ';
	 }
	 cout<<'\n';
}

void insertionSort(int arr[], int n) {
	for (int i=1; i<n; i++) {
		for (int j=i-1; j>=0; j--) {
			if(arr[j] > arr[i]) swap(arr[j], arr[j+1]);
			else break;
		}
	}
}

int main() {
	int n; cout<<"Enter the no of elements: ";
	cin>>n;
	
	int arr[n];
	inputArr(arr, n);
	insertionSort(arr, n);
	outputArr(arr, n);
	
	
	
	
	return 0;
}

