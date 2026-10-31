#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[n-m+1]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-m+1;i++){
		for(int j=i;j<i+m;j++){
			b[i]+=a[j];
		}
	}
	int result=b[0];
	for(int i=0;i<n-m+1;i++){
		if(b[i]!=0){
			result=min(result,b[i]);
		}
	}
	cout<<result<<endl;
	return 0;
}