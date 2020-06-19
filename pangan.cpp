#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class base
{   
	public:
		virtual void display()=0;
		
};
class derived:public base
{
	public:
		string s;
		void getstring()
		{  
		  
		
		getline(cin,s);
		}
		void display()
		{ 
			cout<<s;
		}
};

int main() {
base *b;
derived d;
b=&d;
d.getstring();
b->display();
	return 0;
}

