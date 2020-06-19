#include<iostream>
using namespace std;
int main(){
	char s;
	char g;
	char y;
	cout<<"Enter the year 1 or 2:";
	cin>>y;
	cout<<endl;
	cout<<"Enter the specialization e/E or c/C:";
	cin>>s;
	cout<<endl;
	cout<<"Enter the gender m/M or f/F:";
	cin>>g;
	if(s=='e'){
		s = 'E';
	}
	if(s=='c'){
		s = 'C';
	}
	if(g=='m'){
		g = 'M';
	}
	if(g == 'f'){
		g = 'F';
	}
	switch(y){
		case '1':
			switch(s){
				case 'E' :
					switch(g){
						case 'M' :
							cout<<"The fee is 1800"<<endl;
							break;
						case 'F' :
							cout<<"The fee is 1700"<<endl;
							break;
						
						default:
							cout<<"Error: Wrong Entry"<<endl;
					}
					break;
				case 'C' :
					switch(g){
						case 'M' :
							cout<<"The fee is 1600"<<endl;
							break;
						case 'F' :
							cout<<"The fee is 1500"<<endl;
							break;
						default:
							cout<<"Error: Wrong Entry"<<endl;
					}
					break;
				default :
					cout<<"Error: Wrong Entry"<<endl;
			}
			break;
		case '2':
			switch(s){
				case 'E' :
					switch(g){
						case 'M':
							cout<<"The fee is 1900"<<endl;
							break;
						case 'F':
							cout<<"The fee is 1800"<<endl;
							break;
						default :
							cout<<"Error: Wrong Entry"<<endl;
					}
					break;
				case 'C':
					switch(g){
						case 'M' :
							cout<<"The fee is 1700"<<endl;
							break;
						case 'F' :
							cout<<"The fee is 1600"<<endl;
							break;
						default :
							cout<<"Error: Wrong Entry"<<endl;
					}
					break;
				default :
					cout<<"Error: Wrong Entry"<<endl;
			}
			break;
		default :
			cout<<"Error: Wrong Entry"<<endl;
	}
	
}

