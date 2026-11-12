#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int cnt=0;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]!=' '){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}