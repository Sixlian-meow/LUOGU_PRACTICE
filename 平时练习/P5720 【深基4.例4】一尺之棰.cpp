#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll a;
	cin>>a;
	int day=1;
	int n=a;
	while(a>1){
		a/=2;
		day++;
	}
	cout<<day<<endl;
	return 0;
}