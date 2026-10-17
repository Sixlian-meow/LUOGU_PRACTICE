#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,k;
	int s=n/364;
	for(int i=100;i>0;i--){
		if((s-i)%3==0&&i<s){
			cout<<i<<endl;
			k=(s-i)/3;
			cout<<k<<endl;
			break;
		}
	}

	return 0;
}