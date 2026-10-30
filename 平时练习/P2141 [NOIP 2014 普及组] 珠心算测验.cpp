#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[105];
	int result[105]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum=a[i]+a[j];
			for(int k=0;k<n;k++){
				if(a[k]==sum){
					result[k]=1;
				}
			}
			sum=0;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(result[i]) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}