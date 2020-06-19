#include<bits/stdc++.h>
using namespace std;
//implement queue using array

class Queue {
	int arr[1000];
	int startInd;
	int endInd;
	
public:
	Queue() {
		startInd = 1;
		endInd = 0;
		arr[0] = -1;
	}
	void push(int ne) {
		if(startInd==1000) {
			cout<<"Overflow!"<<endl;
			return;
		}
		endInd++;
		arr[endInd] = ne;
	}
	void pop() {
		if(startInd == endInd) {
			cout<<"Underflow!"<<endl;	
		}
		else startInd++;
	}
	int top() {
		if(startInd<endInd && endInd>0) return arr[startInd];
		else cout<<"Empty queue!"<<endl;
	}
	void print() {
		if(startInd<endInd && endInd>0) {
			for(int i=startInd; i<=endInd; i++) {
				cout<<arr[i]<<endl;
			}
		}
	}
};


int main() {
	Queue q;
	q.push(15);
	q.push(11);
	q.push(16);
	q.print();
	q.pop();
	q.print();
	cout<<q.top()<<endl;
	return 0;
}

