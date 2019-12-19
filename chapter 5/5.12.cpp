#include<iostream>
using namespace std;

main(){
	int m,n=1;
	for(int i=3;i<=50;i++){
		m=i%3;
		if(m==0){
			n=n*i;
		
			cout<<n<<"\n";
		}
	}
	cout<<n<<"\n";
}
