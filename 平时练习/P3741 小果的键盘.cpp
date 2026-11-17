#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<n-1;i++){
		if(s[i]=='V'&&s[i+1]=='K'){
			cnt++;
			s[i]=s[i+1]='*';
		}
	}
	bool ok=false;
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1]&&s[i]!='*'){
			ok=true;
			break;
		}
	}
	if(ok) cnt++;
	cout<<cnt<<endl;
	return 0;
}