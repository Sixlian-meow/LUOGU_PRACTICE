#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	int x;
	cin>>n>>x;
	int cnt=0;
	for(ll i=1;i<=n;i++){
		ll t=i;
		while(t){
			int a=t%10;
			if(a==x){
				cnt++;
			}
			t=t/10;
		}
	}
	cout<<cnt<<endl;
	return 0;
}