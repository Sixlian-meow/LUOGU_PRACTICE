#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN =100000005;

bool is_prime[MAXN];
int prime[MAXN/10];
int cnt=0;

void euler(int n){
	for(int i=2;i<=n;i++){
		if(!is_prime[i]){
			prime[++cnt]=i;
		}
		for(int j=1;j<=cnt && 1LL*i*prime[j]<=n;++j){
			is_prime[i*prime[j]]=true;
			if(i%prime[j]==0){
				break;
			}
		}
	}
	
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,q;
	cin>>n>>q;
	euler(n);
	
	while(q--){
		int k;
		cin>>k;
		cout<<prime[k]<<'\n';
    }
	
	return 0;
}





