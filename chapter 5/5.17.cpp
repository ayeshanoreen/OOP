#include<iostream>

using namespace std;

main(){
	int a,n,m;
	cout<<"1.Product 1 = $2.98\n2.product 2 = $4.50\n3.product 3 = $9.98\n4.product 4 = $4.49\n5.product 5 = $6.87\n";
	
	while(n!=-1){
		cout<<"\nenter product number (-1 to exit): ";
		cin>>a;
		if(a==-1){
			goto there;
		}
		m=m+1;
		
	}
	there:
		cout<<"-----------------------------------------------------------------";
				cout<<"\nQUANTITY SOLD: "<<m;
}
