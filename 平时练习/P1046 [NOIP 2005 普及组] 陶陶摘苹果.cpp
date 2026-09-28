#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	int t;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>t;
	int m=t+30;
	int ans=0;
	for(int i=0;i<10;i++){
		if(m>=a[i]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}