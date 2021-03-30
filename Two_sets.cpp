#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr1[n],count1=0;
	int arr2[n],count2=0;
	int i;
	if(n%2 == 1 && (n-3)%4 == 0){
		cout<<"YES"<<endl;
		arr1[0] = 1;
		arr1[1] = 2;
		count1 = count1+2;
		arr2[0] = 3;
		count2 = count2 + 1;
		for(i=4;i<=n;i++){
			if(i%4 == 0 || i%4 == 3)
				arr1[count1++] = i;
			else
				arr2[count2++] = i;	
		}
		cout<<count1<<endl;
		i = 0;
		while(i != count1){
			cout<<arr1[i]<<" ";
			i++;
		}
		cout<<endl;
		cout<<count2<<endl;
		i=0;
		while(i != count2){
			cout<<arr2[i]<<" ";
			i++;
		}
		cout<<endl;
		return 0;
		
	}
	else if(n%4 == 0){
		cout<<"YES"<<endl;
		for(i=1;i<=n;i++){
			if(i%4 == 1 || i%4 == 0)
				arr1[count1++] = i;
			else
				arr2[count2++] = i;	
		}
		cout<<count1<<endl;
		i = 0;
		while(i != count1){
			cout<<arr1[i]<<" ";
			i++;
		}
		cout<<endl;
		cout<<count2<<endl;
		i=0;
		while(i != count2){
			cout<<arr2[i]<<" ";
			i++;
		}
		cout<<endl;
		return 0;
	}
	else
		cout<<"NO"<<endl;	
	return 0;
}
