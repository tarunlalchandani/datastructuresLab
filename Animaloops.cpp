#include<bits/stdc++.h>
using namespace std;
class ANIMALS
{
	public:
		void display()
		{
			cout<<"\n a animal class:";
		}

};
class reptile:virtual public ANIMALS
{
	public:
		void display()
		{
			cout<<"\n this is reptile class:";
		}
};
class mammal:public ANIMALS
{
	void display()
	{
		cout<<"\n this one is mammal class:";
	}
	
};
void f(ANIMALS & a){
    a.display();}

int main() {

mammal m;
reptile r;
f(m);
f(r);


	return 0;
}

