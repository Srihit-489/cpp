#include<iostream>

using namespace std;

int main(){
	long long int k;
	cin>>k;
	long long int i;
	for(i=1;i<=k;i++){
		if(i==1)
			cout<<"0"<<endl;
		else if(i == 2)
			cout<<"6"<<endl;
		else{
			long long int val = (i-1)*(i*i*i + i*i - 8*i + 16)/2;
			cout<<val<<endl;
		}
	}
	return 0;
}	

