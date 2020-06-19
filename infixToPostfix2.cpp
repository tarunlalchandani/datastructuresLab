#include<bits/stdc++.h>
using namespace std;
//program to convert infix expression to postfix

int priority(char c) {
	switch(c) {
		case '*': return 3;
		case '/': return 3;
		case '+': return 2;
		case '-': return 2;
		case '(': return 1;
		case ')': return 1;
		default: return 0;
	}
}

void printPostfix(string s, int n) {
	stack<char> st;
	st.push( '(' );
	
	for(int i=0; i<n; i++) {
		if (!priority(s[i])) cout<<s[i];
		else if (  s[i]=='(' || priority(st.top()) < priority(s[i])) st.push(s[i]);
		
		else if ( s[i]==')' ) {
			while( st.top() != '(' ) {
				cout<<st.top();
				st.pop();
			}
			st.pop();
		}
		
		else if ( priority(st.top()) >= priority(s[i]) ) {
			while( st.top()!='(' || priority(st.top()) >= priority(s[i]  ) ) {
				cout<<st.top();
				st.pop();
			}
			st.push( s[i] );
		}
	}
	
	while( st.top() != '(' ) {
		cout<<st.top();
		st.pop();
	}
	st.pop();
}

int main() {
	string s; cout<<"Enter infix expression: ";
	cin>>s;
	
	printPostfix(s, s.size());



	return 0;
}

