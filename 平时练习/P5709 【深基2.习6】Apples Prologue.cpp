#include<bits/stdc++.h>
using namespace std;
//剩余苹果数量 P5709
typedef long long ll;
ll m,t,s;
int main(){
	cin>>m>>t>>s;
	ll n;
	if(t!=0){
		if(s%t==0){
			n=m-s/t;
		}
		else n=m-s/t-1;
		if(n<0){
			n=0;
		}
	}
	else n=0;
	cout<<n<<endl;
	return 0;
}