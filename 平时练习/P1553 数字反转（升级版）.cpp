#include<bits/stdc++.h>
using namespace std;

string rev(string t){
	reverse(t.begin(),t.end());
	int pos=0;
	while(pos<t.size()&&t[pos]=='0'){
		pos++;
	}
	if(pos==t.size()) return "0";
	return t.substr(pos);
}

int main(){
	string s;
	cin>>s;
	int len=s.length();
	int choice=1;
	int dot=-1,slash=-1,percent=-1;
	for(int i=0;i<len;i++){
		if(s[i]=='.'){
			choice=2;
			dot=i;
		}
		else if(s[i]=='/'){
			choice=3;
			slash=i;
		}
		else if(s[i]=='%'){
			choice=4;
			percent=i;
		}
	}
	if(choice==1){
		cout<<rev(s)<<endl;
	}
	else if(choice==2){
		string part1=s.substr(0,dot);
		string part2=s.substr(dot+1);
		part1=rev(part1);
		reverse(part2.begin(),part2.end());
		int len2=part2.size();
		while(part2[len2-1]=='0'&&len2>1){
			part2=part2.substr(0,len2-1);
			len2--;
			
		}
		cout<<part1<<'.'<<part2<<endl;
		
	}
	else if(choice==3){
		string zi=s.substr(0,slash);
		string mu=s.substr(slash+1);
		zi=rev(zi);
		mu=rev(mu);
		cout<<zi<<'/'<<mu<<endl;
		
	}
	else if(choice==4){
		string num=s.substr(0,percent);
		num=rev(num);
		cout<<num<<'%'<<endl;
		
	}
	return 0;
}