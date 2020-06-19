#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;
	
	Node(int d) {
		data = d;
		left=NULL;
		right=NULL;
	}
	
	void levelOrderPrint(Node* root) {
		queue <Node *> q;
		q.push(root);
		
		while(!q.empty()) {
			Node* top = q.front();
			if(top->left != NULL) q.push(top->left);
			if(top->right != NULL) q.push(top->right);
			cout<<top->data<<' ';
			q.pop();
		}
	}
	
	Node* levelOrder(Node* root) {
		queue <Node *> q;
		q.push(root);
		
		while(!q.empty()) {
			Node* top = q.front();
			if(top->left != NULL) q.push(top->left);
			if(top->right != NULL) q.push(top->right);
			
			if(top->left==NULL || top->right==NULL) return top;
			q.pop();
		}
	}
	
	
	void insertData(int d, Node* root) {
		Node* lastNode = levelOrder(root);
		
		if(lastNode->left==NULL) {
			lastNode->left = new Node(d);
		}
		else if(lastNode->right == NULL) {
			lastNode->right = new Node(d);
		}
	}
	
	void printInorder(Node* root) {
		if(root==NULL) return;
		
		printInorder(root->left);
		cout<<root->data<<' ';
		printInorder(root->right);
	}
	
	void printPostorder(Node* root) {
		if(root==NULL) return;
		
		printPostorder(root->left);	
		printPostorder(root->right);
		cout<<root->data<<' ';
	}
	
	void printPreorder(Node* root) {
		if(root==NULL) return;
		
		cout<<root->data<<' ';
		printPreorder(root->left);
		printPreorder(root->right);
	}
	
	Node* findLast(Node* root) {
		queue <Node *> q;
		q.push(root);
		
		Node* last = root;
		while(!q.empty()) {
			Node* top = q.front();
			if(top->left != NULL) q.push(top->left);
			if(top->right != NULL) q.push(top->right);
			last = top;
			q.pop();
		}
		return last;
	}
	
	Node* findNode(Node* root, int d) {
		queue <Node *> q;
		q.push(root);
		
		while(!q.empty()) {
			Node* top = q.front();
			
			if(top->data==d) return top; //if element found, return it
			
			if(top->left != NULL) q.push(top->left);
			if(top->right != NULL) q.push(top->right);
			q.pop();
		}
		return NULL; //return NULL if not found
	}
	
 	void delete(Node* root, int d) {
		Node* lastNode = findLast(root);
		Node* toDelete = findNode(root, d);
		
		if(toDelete == NULL) {
			cout<<"Error: Couldn't find element in tree"
			return;
		}
		
		
		
	}
};




int main() {
	Node* head = new Node(0);
	
	head->levelOrderPrint(head);
	
	while (true) {
		int ch;
		cout<<"\n1. Enter data\n2. Print Data\n4. Exit\n";
		cout<<"__________________________________________\n";
		cin>>ch;
		cout<<'\n';
		
		if(ch==1) {
			int d;
			cout<<"\nEnter data: "; 
			cin>>d;
			head->insertData(d, head);
		}	
		
		else if (ch==2) {
			int ch2;
			cout<<"\n1. Preorder\n2. Inorder\n3. Postorder\n4. Level Order\n";
			cout<<"\n__________________________________________\n";
			cin>>ch2;
			cout<<'\n';
			if(ch2 == 1) head->printPreorder(head);
			if(ch2 == 2) head->printInorder(head);
			if(ch2 == 3) head->printPostorder(head);
			if(ch2 == 4) head->levelOrderPrint(head);
		}
		
//		else if (ch == 3) {
//			head.delete();
//		}

		else if (ch == 4) break;
	}

	
	return 0;
}

