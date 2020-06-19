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

class Queue {
	Node* front;
	Node* back;
	
public:
	Queue() {
		Node* temp = new Node();
		front = temp;
		back = temp;
	}
	
	void push(int d) {
		back->next = new Node(d);
		back = back->next;
	}
	
	void pop() {
		if(front != back) {
			Node* temp = front;
			front = front->next;
			delete temp;
		}
		else cout<<"UnderFlow!"<<endl;
	}
	
	int top() {
		if(front != back) {
			return front->next->data;
		}
		else cout<<"No element"<<endl;
	}
	
	void print() {
		if(front != back) {
			Node* temp = front->next;
			while(temp!=NULL) {
				cout<<temp->data<<endl;
				temp = temp->next;
			}	
		}
		else cout<<"No element"<<endl;
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

