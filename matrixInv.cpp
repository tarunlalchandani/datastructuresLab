#include<bits/stdc++.h>
using namespace std;

int main() {
	int matrix[100][100];
	cout<<"Enter matrix order: "; int n; cin>>n;
	
	cout<<"\nEnter n*n matrix elements\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin>>matrix[i][j];
		}
	}


	return 0;
}

