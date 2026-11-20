#include<bits/stdc++.h>
using namespace std;

int get_num(string s){
	int pos=0;
	int sum=1;
	while(s[pos]){
		if(s[pos]=='A') sum*=1;
		else if(s[pos]=='B') sum*=2;
		else if(s[pos]=='C') sum*=3;
		else if(s[pos]=='D') sum*=4;
		else if(s[pos]=='E') sum*=5;
		else if(s[pos]=='F') sum*=6;
		else if(s[pos]=='G') sum*=7;
		else if(s[pos]=='H') sum*=8;
		else if(s[pos]=='I') sum*=9;
		else if(s[pos]=='J') sum*=10;
		else if(s[pos]=='K') sum*=11;
		else if(s[pos]=='L') sum*=12;
		else if(s[pos]=='M') sum*=13;
		else if(s[pos]=='N') sum*=14;
		else if(s[pos]=='O') sum*=15;
		else if(s[pos]=='P') sum*=16;
		else if(s[pos]=='Q') sum*=17;
		else if(s[pos]=='R') sum*=18;
		else if(s[pos]=='S') sum*=19;
		else if(s[pos]=='T') sum*=20;
		else if(s[pos]=='U') sum*=21;
		else if(s[pos]=='V') sum*=22;
		else if(s[pos]=='W') sum*=23;
		else if(s[pos]=='X') sum*=24;
		else if(s[pos]=='Y') sum*=25;
		else if(s[pos]=='Z') sum*=26;
		pos++;
	}
	return sum%47;
}

int main(){
	string hui;
	string dui;
	cin>>hui>>dui;
	int a=get_num(hui);
	int b=get_num(dui);
	if(a==b){
		cout<<"GO"<<endl;
	}
	else{
		cout<<"STAY"<<endl;
	}
	return 0;
}