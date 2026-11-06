#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int now=0;
	int cnt=0;
	int len;
	while(cin>>len){
		for(int i=0;i<len;i++){
			cout<<now;
			cnt++;
			if(cnt==n){
				cout<<endl;
				cnt=0;
			}
		}
		now=1-now;
	}
	
	return 0;
}