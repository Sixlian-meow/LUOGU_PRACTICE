#include <bits/stdc++.h>
using namespace std;

//蓝桥竞技 P16235
const int N=1e5+10;
typedef long long ll;
int n,a[N];
void solve(){
	cin>>n;
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	if(sum%5!=0||sum==0){
		cout<<"F\n";
		return;
	}
	ll k=sum/5;
	ll num=0;
	for(int i=0;i<n;i++){
		num=num+min(a[i]*1ll,k);
	}
	if(num!=sum) cout<<"F\n";
	else cout<<"T\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
} 