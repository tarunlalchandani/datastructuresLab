#include<bits/stdc++.h>
using namespace std;
//selection sort

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

void selectionSort(int arr[], int n) {
	 for (int i=0; i<n; i++) {
	 	int minInd = i;
	 	for (int j=i; j<n; j++) {
	 		if (arr[j] < arr[minInd]) minInd = j;
	 	}
	 	swap(arr[i], arr[minInd]);
	 }
}

int main() {
	int n; cout<<"Enter the no of elements: ";
	cin>>n;
	
	int arr[n];
	inputArr(arr, n);
	selectionSort(arr, n);
	outputArr(arr, n);
	
	return 0;
}

