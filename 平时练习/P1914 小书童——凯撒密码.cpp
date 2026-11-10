#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++){
		s[i]=(s[i]-'a'+n)%26+'a';
	}
	cout<<s<<endl;
	return 0;
}