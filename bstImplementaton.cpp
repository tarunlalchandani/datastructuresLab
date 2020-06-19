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
	
	void insert(Node* root, int d) {
		if(d == root->data) return;
		if(d<root->data) {
			if(root->left == NULL) {
				root->left = new Node(d);
				return;
			}
			return insert(root->left, d);
		}
		if(d>root->data){
			if(root->right == NULL) {
				root->right = new Node(d);
				return;
			}
			return insert(root->right, d);
		} 
	}
	
	void printLO(Node* root) {
		queue<Node *> q;
		q.push(root);
		while(!q.empty()) {
			Node* temp = q.front();
			q.pop();
			cout<<temp->data<<' ';
			
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}
	}
};


int main() {
	Node* r = new Node(10);
	r->left = new Node(6);
	r->left->left = new Node(5);
	r->left->right = new Node(7);
	r->right = new Node(15);
	r->right->left = new Node(14);
	r->right->right = new Node(16);

	r->printLO(r);
	r->insert(r, 20);
	r->printLO(r);
	return 0;
}

