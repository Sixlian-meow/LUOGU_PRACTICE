#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.length();
	int boy=0;
	int girl=0;
	for(int i=0;i<len;i++){
		if(s[i]=='b'||(i+1<len)&&s[i+1]=='o'||(i+2<len)&&s[i+2]=='y'){
			boy++;
		}
		if(s[i]=='g'||(i+1<len)&&s[i+1]=='i'||(i+2<len)&&s[i+2]=='r'||(i+3<len)&&s[i+3]=='l'){
			girl++;
		}
	}
	cout<<boy<<endl;
	cout<<girl<<endl;
	return 0;
}