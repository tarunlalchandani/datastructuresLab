#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	
	Node(int d=0) {
		data = d;
		next = NULL;
	}
};

class Stack {
	Node* headPos;
	
public:
	Stack() {
		headPos = NULL;
	}
	void push(int i) {
		Node* n = new Node(i);
		if(headPos == NULL) {
			headPos = n;
		}
		else{
			n->next = headPos;
			headPos = n;	
		}
	}
	void pop() {
		if(headPos != NULL) {
			Node* oldHeadPos = headPos;
			headPos = headPos->next;
			delete oldHeadPos;
		}
		else {
			cout<<"Error. Underflow!\n";
		}
	}
	int top() {
		if(headPos != NULL) {
			return headPos -> data;
		}	
		else cout<<"Error. No Data";
		return -1;
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

