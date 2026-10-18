#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[100]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				b[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	return 0;
}