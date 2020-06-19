#include<bits/stdc++.h>
using namespace std;

class pQueue {
public:
	int arr[1000];
	int frontInd=0;
	int backInd=0;
	
	pQueue() {
		frontInd = 0;
		frontInd = backInd;
	}

	void pop(int d) {
		if(frontInd == backInd) {
			cout<<"UnderFlow!"<<endl;
			return;
		}
		frontInd++;		
	}

	void push(int d) {
		cout<<d<<endl;
		if(backInd==999) {
			cout<<"Overflow"<<endl;
			return;
		}
		else if(frontInd == backInd) {
			backInd++;
			arr[backInd] = d;
			return;		
		}
		else if(arr[frontInd+1]>d) {
			for(int i=backInd; i>frontInd; i--) {
				arr[i+1] = arr[i];
			}
			backInd++;
		}
		else {
			int pos = frontInd+1;
			for(pos; pos<=backInd && arr[pos]<d; pos++)
			pos++;

			for(int i=backInd; i>backInd-frontInd-pos; i--) {
				arr[i+i] = arr[i];
			}
			backInd++;
		}
	}
	
	int top() {
		return arr[frontInd+1];	
	}
	
	void print() {
		if(frontInd != backInd)
		for(int i=frontInd+1; i<=backInd; i++) {
			cout<<arr[i]<<endl;
		}
		
		else cout<<"Empty queue"<<endl;
	}
};

int main() {
	pQueue q;
	q.push(5);
	q.push(6);
	q.push(4);
	cout<<endl;
	q.print();

	return 0;
}

