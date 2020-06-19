#include<bits/stdc++.h>
using namespace std;
//merge     sort

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

void merge(int arr[], int a, int b, int c, int d) {
	int ptr1 = a, ptr2 = c;
	int i;
	for(int i=a; i<d && ptr1<b && ptr2<d; i++) {
		if (arr[ptr1] < arr[ptr2]) {
			arr[i] = arr[ptr1];
			ptr1++;
		}
		else {
			arr[i] = arr[ptr2];
			ptr2++;
		}
	}
	while(ptr1 < b) {
	    arr[i] = arr[ptr1];
	}
	while(ptr2 < d) {
		arr[i] = arr[ptr2];
	}
}

void mergeSort(int arr[], int a, int b) {
    if (a == b) return;
	mergeSort(arr, 0, (b+a)/2);
	mergeSort(arr, (b+a)/2 + 1, b);
	merge(arr, 0, (b+a)/2, (b+a)/2 + 1, b);
	
	
}

int main() {
	int n; cout<<"Enter the no of elements: ";
	cin>>n;
	
	int arr[n];
	inputArr(arr, n);
	mergeSort(arr, 0, n);
	outputArr(arr, n);
	
	return 0;
}

