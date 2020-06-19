#include<bits/stdc++.h>
using namespace std;
class base
{ public:
 base(){
	cout<<"\n base constructor:";
}
~  base(){
	cout<<"\n base destructor:";
}
};
class derived:public base
{public:
	 derived(){
		cout<<"\n derived constructor:";
	
	}
~ derived()
	{
		cout<<"\n derived destructor:";
	}
	
};
int main() {
 base *b=new derived();
  
	return 0;
}

