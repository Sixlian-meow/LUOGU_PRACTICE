#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,m;
	cin>>l>>m;
	int a[10005];
	for(int i=0;i<=l;i++){
		a[i]=1;
	}
	int u,v;
	while(m--){
		cin>>u>>v;
		for(int i=u;i<=v;i++){
			a[i]=0;
		}
	}
	int sum=0;
	for(int i=0;i<=l;i++){
		sum+=a[i];
	}
	cout<<sum<<endl;
	
	return 0;
}