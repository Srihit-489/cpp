#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(1){
		if(n == 1)
			break;
		else if(n%2 == 0){
			cout<<n<<" ";
			n = n/2;
		}
		else{
			cout<<n<<" ";
			n = 3*n + 1;
			
		}		
	}
	cout<<"1\n";
	return 0;
}
