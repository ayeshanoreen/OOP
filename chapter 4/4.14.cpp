#include<iostream>
using namespace std;
main(){
	int n;
	float a,b,c,d,e,f;
	cout<<"\nEnter account number (or -1 to quit): ";
	cin>>a;
	while(a != -1){
		cout<<"Enter begining balance: ";
		cin>>b;
		cout<<"Enter total charges: ";
		cin>>c;
		cout<<"Enter total credits: ";
		cin>>d;
		cout<<"Enter credit limit: ";
		cin>>e;
		f=(b+c)-d;
		cout<<"New balance is "<<f<<endl;
	
		if(f>5500){
				cout<<"Account: "<<a<<endl;
		cout<<"Credit limit: "<<e<<endl;
		cout<<"Balance: "<<f<<endl;
			cout<<"Credit limit exceded !"<<endl;
		}
		cout<<"\nEnter account number (or -1 to quit): ";
		cin>>a;
	}
}
