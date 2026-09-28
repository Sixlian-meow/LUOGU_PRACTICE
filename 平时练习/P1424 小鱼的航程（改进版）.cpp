#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int x;
    ll n;
	cin>>x>>n;
	ll ans;
	ll a=n/7;
	int rem=n%7;
	int day=0;
	int totalday=a*5;
	
	int b=x;
	for(int i=0;i<rem;i++){
		if(b<6){
			day++;
		}
		b++;
		if(b>7)b=1;
	}
	int days=totalday+day;
	ans= days*250;
		
	cout<<ans<<endl;
	return 0;
} 