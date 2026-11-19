#include<bits/stdc++.h>
using namespace std;

int getVal(string s){
	if(s=="zero") return 0;
	if(s == "one") return 1;
    if(s == "two") return 2;
    if(s == "three") return 3;
    if(s == "four") return 4;
    if(s == "five") return 5;
    if(s == "six") return 6;
    if(s == "seven") return 7;
    if(s == "eight") return 8;
    if(s == "nine") return 9;
    if(s == "ten") return 10;
    if(s == "eleven") return 11;
    if(s == "twelve") return 12;
    if(s == "thirteen") return 13;
    if(s == "fourteen") return 14;
    if(s == "fifteen") return 15;
    if(s == "sixteen") return 16;
    if(s == "seventeen") return 17;
    if(s == "eighteen") return 18;
    if(s == "nineteen") return 19;
    if(s == "twenty") return 20;
    if(s == "a") return 1;
    if(s == "another") return 1;
    if(s == "both") return 2;
    if(s == "first") return 1;
    if(s == "second") return 2;
    if(s == "third") return 3;

    // 都不匹配
    return -1;
}

bool cmp(const string &a,const string &b){
	return a+b<b+a;
}
int main(){
	vector<string> v;
	string s;
	for(int i=0;i<6;i++){
		cin>>s;
		int num=getVal(s);
		if(num!=-1){
			int res=num*num%100;
			string t;
			if(res<10){
				t="0"+to_string(res);
			}
			else t=to_string(res);
			v.push_back(t);
		}
	}
	cin>>s;
	if(v.empty()){
		cout<<0<<endl;
		return 0;
	}
	
	sort(v.begin(),v.end(),cmp);
	string ans;
	for(auto &x:v) ans+=x;
	int pos=0;
	while(pos<ans.length()&&ans[pos]=='0'){
		pos++;
	}
	if(pos==ans.length()){
		cout<<0<<endl;
	}
	else{
		cout<<ans.substr(pos)<<endl;
	}
	return 0;
}