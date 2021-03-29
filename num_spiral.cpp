#include<iostream>

using namespace std;

int main(){
	long long int r,c,t;
	cin>>t;
	for(int i = 0;i<t;i++){
	cin>>r>>c;
	if(c >= r){
		if(c%2 == 1)
			cout<<c*c-(r-1)<<endl;
		else
			cout<<(c-1)*(c-1)+r<<endl;	
	}
	else{
		if(r % 2 == 1)
			cout<<(r-1)*(r-1)+c<<endl;
		else
			cout<<r*r-(c-1)<<endl;	
	}
	}
	return 0;
}
