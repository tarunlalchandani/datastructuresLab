#include<bits/stdc++.h>
using namespace std;
//implement queue using array

class Queue {
	int arr[1000];
	int startInd;
	int endInd;
	
public:
	Queue(){
		startInd = 0;
		endInd = 0;
	}
	void push(int ne) {
		if((startInd==0&&endInd==999) || startInd-endInd==1) {
				cout<<"Overflow!"<<endl;
				return;
		}
		
		else if(endInd==999) {
			arr[endInd] = ne;
			endInd = 0;
		}
		
		else {
			arr[endInd] = ne;
			endInd++;
		}
	}
	
	void pop() {
		if(startInd == endInd) {
			cout<<"Underflow!"<<endl;	
		}
		else if(startInd == 999) startInd = 0;
		else startInd++;
	}
	
	int top() {
		if(startInd != endInd) return arr[startInd];
		else cout<<"Empty queue!"<<endl;
	}
	
	void print() {
		if(startInd != endInd) {
			for(int i=startInd; i%1000!=endInd; i++) {
				cout<<arr[i%1000]<<endl;
			}
		}
	}
};


int main() {
	Queue q; 
	q.push(15);
	q.push(15);
	q.push(11);
	q.push(16);
	q.print();
	q.pop();
	cout<<q.top();
	return 0;
}

