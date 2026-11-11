#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n==1||n==0){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	string s;
	cin>>s;
	int len=s.length();
	int a[26]={0};
	for(int i=0;i<len;i++){
		int cnt=s[i]-'a';
		a[cnt]++;
	}
	int ma=0;
	int mi=105;
	for(int i=0;i<26;i++){
		if(a[i]!=0){
			ma=max(ma,a[i]);
			mi=min(mi,a[i]);
		}
	}
	int num=ma-mi;
	if(isPrime(num)){
		cout<<"Lucky Word"<<endl;
		cout<<num<<endl;
	}
	else {
		cout<<"No Answer"<<endl; 
		cout<<"0"<<endl; 
	}
	return 0;
}