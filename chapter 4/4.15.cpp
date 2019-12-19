#include<iostream>
using namespace std; 

main(){
	float a,tol;
	cout<<"\nEnter hours worked:(-1 to exit): ";
	cin>>a;
	while(a !=-1){
	tol=2+0.1*a;
	cout<<"Accrued leave: "<<tol<<endl;
	cout<<"\nEnter hours worked:(-1 to exit): ";
	cin>>a;
}
}
