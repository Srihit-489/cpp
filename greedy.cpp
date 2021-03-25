#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int max(int arr[],int start,int n){
	int size = n - start;
	int temp[size];
	int i=0;
	while(i<size){
		temp[i] = arr[start + i];
		i++;
	}
	sort(temp,temp + size);
	cout<<temp[size-1];
	return temp[size-1];
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	int i;
	int temp;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	//cout<<endl;
	for(i=0;i<size;i++){
		cout<<arr[i]<<ends;
	}
	cout<<endl;
	int final_max = 0;
	int var;
	for(i=0;i<size;i++){
		var = max(arr,i,size) - arr[i];
		if(final_max < var)
			final_max = var;
	}
	cout<<final_max<<endl;
	return 0;
}
