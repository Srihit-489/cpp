#include<iostream>

using namespace std;

int main(){
     int n;
     cin>>n;
     int temp,sum=0;
     for(int i=0;i<n-1;i++){
     	cin>>temp;
     	sum = sum + temp;
     }
     n = n*(n+1)/2;
     n = n - sum;
     cout<<n<<endl;
     return 0;
}
