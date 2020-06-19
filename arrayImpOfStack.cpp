#include<bits/stdc++.h>
using namespace std;

class Stack {
	int arr[1000];
	int topPos = 0;
public:
	void push(int a) {
		arr[topPos] = a;
		topPos++;
	}
	void pop() {
		if(topPos>0) {
			topPos--;
		}
		else {
			cout<<"UnderFlow!";
		}
	}
	int top() {
		if(topPos<=0) {
			cout<<"No Element";
		}
		else {
			return arr[topPos-1];
		}		
	}
};


int main() {
	Stack s;
	s.push(15);
	s.push(20);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;


	return 0;
}

