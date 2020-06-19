#include<bits/stdc++.h>
using namespace std;


class Node {
public:
	int data;
	Node* left;
	Node* right;
	
	Node(int d) {
		data = d;
		left = NULL; right = NULL;		
	}
	
	void inorder(Node* h) {
		stack<Node*> s;
		s.push(NULL);
		Node* ptr = this;
		s.push(ptr);
		
		while(!s.empty()) {
			
			while(ptr->left!=NULL) {
				ptr = ptr->left;
				s.push(ptr);
			}
			cout<<1;
			ptr = s.top();
			cout<<ptr->data<<' ';
			s.pop();
			if (ptr==NULL) return;
			if(ptr->right != NULL) {
				ptr = ptr->right;
			}
		}
		
	}
};



int main() {
	Node* t = new Node(3);
	t->left = new Node(4);
	t->left->left  = new Node(2);
	t->left->right = new Node(9);
	t->right = new Node(5);
	t->right->left = new Node(10);
	t->right->right = new Node(11);
	
	t->inorder(t);
	return 0;
}

