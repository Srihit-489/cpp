#include<iostream>

using namespace std;

long long int bit(long long int n){
	if(n == 1)
		return 2;
	else
		return 2*bit(n-1) % 1000000007;	
}

int main(){
	long long int n;
	cin>>n;
 	long long answer = bit(n);
	cout<<answer<<endl;
	return 0;
}
