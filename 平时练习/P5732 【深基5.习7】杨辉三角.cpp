#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[20]={0};
	a[0]=1;
	for(int i=0;i<n;i++){
		for(int j=i;j>=1;j--){
			a[j]=a[j]+a[j-1];
		}
		for(int k=0;k<=i;k++){
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}