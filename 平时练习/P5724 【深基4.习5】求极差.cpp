#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ma=a[0];
	int mi=a[0];
	for(int i=0;i<n;i++){
		ma=max(a[i],ma);
		mi=min(a[i],mi);
	}
	int res=ma-mi;
	cout<<res<<endl;
	return 0;
}