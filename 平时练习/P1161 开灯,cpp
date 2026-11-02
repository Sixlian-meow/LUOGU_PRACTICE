#include<bits/stdc++.h>
using namespace std;
const int MAX=2000005;
int b[MAX]={0};
int main(){
	int n;
	cin>>n;
	double a;
	int t;
	while(n--){
		cin>>a>>t;
		for(int i=1;i<=t;i++){
			int pos=(int)(a*i);
			b[pos]^=1;
		}
	}
	for(int i=0;i<MAX;i++){
		if(b[i]==1){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}