#include<bits/stdc++.h>
using namespace std;
int main(){
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	int a[10000]={0};
	int sum=0;
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				sum=i+j+k;
				a[sum]++;
			}
		}
	}
	int t=0;
	for(int i=0;i<10000;i++){
		t=max(t,a[i]);
	}
	for(int i=0;i<10000;i++){
		if(a[i]==t){
			cout<<i<<endl;
			break;
		}
	}
	
	return 0;
} 