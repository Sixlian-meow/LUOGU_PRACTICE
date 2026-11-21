#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt[26]={0};
	string s;
	for(int i=0;i<4;i++){
		getline(cin,s);
		int len=s.length();
		for(int j=0;j<len;j++){
			if(s[j]>='A'&&s[j]<='Z'){
				cnt[s[j]-'A']++;
			}
		}
	}
	
	int max_h=0;
	for(int i=0;i<26;i++){
		max_h=max(cnt[i],max_h);
	}
	for(int h=max_h;h>=1;h--){
		for(int i=0;i<26;i++){
			if(i!=0) cout<<" ";
			if(cnt[i]>=h) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<26;i++){
		if(i!=0) cout<<" ";
		char a='A';
		cout<<(char)(a+i);
		
	}
	cout<<endl;
	
	
	return 0;
}