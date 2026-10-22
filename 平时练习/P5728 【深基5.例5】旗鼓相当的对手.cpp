#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1005];
	int b[1005];
	int c[1005];
	int sum[1005];
	int cnt=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
		sum[i]=a[i]+b[i]+c[i];
	} 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-a[j])<=5&&abs(b[i]-b[j])<=5&&abs(c[i]-c[j])<=5&&abs(sum[i]-sum[j])<=10){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}