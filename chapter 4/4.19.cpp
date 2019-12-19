#include<iostream>
using namespace std;
main(){
	int m,fmax=0,smax=0;
	
	for( int i=0;i<=10;i++){
		cout<<"enter number: ";
		cin>>m;
		if(fmax<=m){
			smax=fmax;
			fmax=m;
		
		}else if(smax<m){
			
			smax=m;}


	}
	cout<<"maximum number is: "<<fmax;
	cout<<"\n second max number is: "<<smax;
}
