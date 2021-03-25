#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char ch[50];
	cin>>ch;
	//cout<<ch<<endl;
	int i;
	int count=0;
	int max=0;
	for(i=1;i<strlen(ch);i++){
		if(ch[i] == ch[i-1])
			count++;	
		else
			count=0;
		//cout<<count<<endl;	
		if(count > max)
			max = count;		
	}
	cout<<max+1<<endl;
	return 0;
	
}
