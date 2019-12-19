#include<iostream>
using namespace std;
main(){
	int m,fmax=0,smax=0,tmax=0;
	
	for( int i=0;i<=10;i++){
		cout<<"enter number: ";
		cin>>m;
		if(fmax<=m){
			tmax=smax;
			smax=fmax;
			fmax=m;
		
		}else if(smax<m){
			tmax=smax;
			smax=m;
		}else if(tmax<m){
			tmax=m;}

	}
	cout<<"maximum number is: "<<fmax;
	cout<<"\n second max number is: "<<smax;
	cout<<"\n third max number is: "<<tmax;
}
