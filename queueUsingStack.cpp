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
	bool empty() {
		if(headPos == NULL) return true;
		return false;
	}
	
};

class Queue {
	Stack s1, s2;

public:
	void push(int d) {
		s1.push(d);
	}
	
	void pop() {
		while(!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		
		s2.pop();
		
		while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}
	
	int top() {
		while(!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		
		int res = s2.top();
		
		while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
		return res;
	}
	
	void print() {
		while(!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		
		
		while(!s2.empty()) {
			cout<<s2.top()<<endl;
			s1.push(s2.top());
			s2.pop();
		}
	}
};

int main() {
	Queue q;
	q.push(15);
	q.push(11);
	q.push(16);
	q.print();
	cout<<endl;
	q.pop();
	q.print();
	cout<<endl;
	cout<<q.top()<<endl;
	cout<<endl;


	return 0;
}

