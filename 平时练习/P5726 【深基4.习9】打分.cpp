#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ma=a[0];
	int mi=a[0];
	int sum=0;
	for(int j=0;j<n;j++){
		ma=max(ma,a[j]);
		mi=min(mi,a[j]);
		sum+=a[j];
	}
	double result=1.0*(sum-ma-mi)/(n-2);
	cout<<fixed<<setprecision(2)<<result<<endl;
	return 0;
}