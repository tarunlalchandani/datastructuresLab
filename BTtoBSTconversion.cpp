#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;
	
	Node(int d = 0) {
		data = d;
		left = NULL;
		right = NULL;
	}
	
	void insertNode(int d) {
		if(left == NULL) {
			left = new Node(d);
		}
		else if (right == NULL) {
			right = new Node(d);
		}
		else {
			cout<<"Couldn't insert. Not empty."<<'\n';
		}
	}
};

vector<int> arr;

void inorderArr(Node* root) {
	if(root->left != NULL) inorderArr(root->left);
	arr.push_back(root->data);
	if(root->right != NULL) inorderArr(root->right);
	return;
}

void inorder(Node* root) {
	if(root->left != NULL) inorder(root->left);
	cout<<root->data<<' ';
	if(root->right != NULL) inorder(root->right);
	return;
}

void insertBst(Node* root, int d) {
	if(d < root->data) {
		if(root->left == NULL) {
			root->left = new Node(d);
			return;
		}
		else {
			insertBst(root->left, d);
		}
	}
	
	else if (d > root->data){
		if(root->right == NULL) {
			root->right = new Node(d); 
			return;
		}
		else {
			insertBst(root->right, d);
		}
	}
}

int main() {
	Node* root = new Node(0);
	root->left = new Node(5);
	root->right = new Node(4);
	root->left->left = new Node(6);
	root->left->right = new Node(8);
	
	inorderArr(root);
	
	sort(arr.begin(), arr.end());
	
	cout<<'\n';
	Node* bstRoot = new Node(arr[arr.size()/2]);
	
	for(int i=0; i<arr.size(); i++) {
		insertBst(bstRoot, arr[i]);
	}
	
	cout<<'\n'<<"The inorder traversal of converted BST is: "<<'\n';
	
	inorder(bstRoot);
	
	return 0;
}

