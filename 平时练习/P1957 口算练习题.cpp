#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char op;
	while(n--){
		string s;
		cin>>s;
		int x,y;
		if(s=="a"||s=="b"||s=="c"){
			op=s[0];
			cin>>x>>y;
		}
		else{
			x=stoi(s);
			cin>>y;
		}
		string exp;
		int res;
		char sign;
		if(op=='a'){
			sign='+';
			res=x+y;
		}
		if(op=='b'){
			sign='-';
			res=x-y;
		}
		if(op=='c'){
			sign='*';
			res=x*y;
		}
		exp=to_string(x)+sign+to_string(y)+"="+to_string(res);
		cout<<exp<<endl;
		cout<<exp.size()<<endl;
	}
	return 0;
}