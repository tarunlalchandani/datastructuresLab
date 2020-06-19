#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;
	
	Node(int d = 0) {
		data = d;
		next = NULL;
		prev = NULL;
	}
	void insertBeg(int d) {
		Node* n = new Node(d);
		Node* oldNext = next;
		next = n;
		oldNext -> prev = n;
		n->next = oldNext;
	}
	void insertMid(int d, int pos) {
		pos--;
		Node* n = new Node(d);
		int i=0; Node* t = next;
		while(t->next!= NULL) {
			t = t->next;
			i++;
			if(i==pos) break;
		}
		Node* oldPrev = t->prev;
		Node* oldNext = t;
		oldPrev->next = n; n->prev = oldPrev;
		n->next=oldNext; oldNext->prev = n;
	}
	void insertEnd(int d) {
		Node* n = new Node(d);
		int i=0; Node* t = next;
		while(t->next!= NULL) {
			t = t->next;
		}
		t->next = n;
		n->prev = t;
	}
	void deleteBeg() {
		Node* oldNext = next;
		oldNext->next->prev = oldNext->prev;
		next = oldNext->next;
		delete oldNext;
	}
	void deleteMid(int pos) {
		pos--;
		int i=0; Node* t = next;
		while(t->next!= NULL) {
			t = t->next;
			i++;
			if(i==pos) break;
		}
		t->prev->next = t->next;
		t->next->prev = t->prev;
		delete t;
	}
	void deleteEnd() {
		Node* t = next;
		while(t->next!= NULL) {
			t = t->next;
		}
		t->prev->next = NULL;
		delete t;
	}

};

void printAll(Node* h) {
	while(h->next != NULL) {
		h = h->next;
		cout<<h->data<<' ';
	}
	cout<<'\n';
	
}


int main() {
	Node *head = new Node();
	cout<<"Enter the number of elements to be inserted: "; int n; cin>>n;
	
	int arr[100];
	cout<<"Enter the n elements to be inserted: \n";
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* h = head;
	for (int i=0; i<n; i++) {
		h->next = new Node(arr[i]);
		h->next->prev = h;
		h = h->next;
	}
	
	cout<<"The list is\n";
	printAll(head);
	
	
	head->insertMid(5, 2);
	cout<<"After inserting 5 at pos 2\n";
	printAll(head);
	
	head->insertEnd(50);
	cout<<"After inserting 50 at end\n";
	printAll(head);
	
	head->deleteEnd();
	cout<<"After deleting end\n";
	printAll(head);

	head->deleteBeg();
	cout<<"After deleting Beginning\n";
	printAll(head);

	head->deleteMid(2);
	cout<<"After deleting pos 2\n";
	printAll(head);
	
	return 0;
}

