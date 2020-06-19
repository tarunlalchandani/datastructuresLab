#include<bits/stdc++.h>
using namespace std;

class Node { 
    int key, height; 
    Node* left, right; 
  
    Node(int d) { 
        key = d; 
        height = 1; 
    } 
} 
 
class AVLTree { 
  
    Node* root; 
   
    int height(Node* N) { 
        if (N == null) 
            return 0; 
  
        return N->height; 
    } 

    Node rightRotate(Node* y) { 
        Node* x = y->left; 
        Node* T2 = x->right; 
  
        // Perform rotation 
        x.right = y; 
        y.left = T2; 
  
        // Update heights 
        y.height = max(height(y.left), height(y.right)) + 1; 
        x.height = max(height(x.left), height(x.right)) + 1; 
  
        // Return new root 
        return x; 
    } 
  


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


int main() {



	return 0;
}

