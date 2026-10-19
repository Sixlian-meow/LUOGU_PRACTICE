#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100];
	int x,cnt=0;
	while(cin>>x){
		if(x==0) break;
		a[cnt++]=x;
	}
	for(int i=cnt-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	return 0;
} 